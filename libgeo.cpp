#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
template<class T>
class Point
{
private:
	T x;
	T y;
public:
	Point(T x, T y): x(x), y(y) {}
	Point() : x(0), y(0) {}
	T getX() const {return this->x;}
	T getY() const {return this->y;}
	bool operator<(const Point<T> &p) const
	{
		if(x<p.getX())
			return true;
		else if (x==p.getX() && (y>=p.getY()))
			return true;
		return false;
	}
};

template<class T>
class Segment
{
public:
	Point<T> a;
	Point<T> b;

	Segment(Point<T> a,Point<T> b): a(a), b(b) {}
	long double getLength()
	{
	  return sqrt((this->b.getX()-this->a.getX())*(this->b.getX()-this->a.getX()) + 
	  			 (this->b.getY()-this->a.getY())*(this->b.getY()-this->a.getY()));
	}

	bool isPointInSegment(Point<T> point)
	{
		T det; //wyznacznik macierzy
		Point<T> a = this->a;
		Point<T> b = this->b;
		det=a.getX()*b.getY()+b.getX()*point.getY()+point.getX()*a.getY()-point.getX()*b.getY()-a.getX()*point.getY()-b.getX()*a.getY();
		if (det!=0) 
			return 0; 
		else
		{
			if ((std::min(a.getX(),b.getX())<=point.getX())&&(point.getX()<=std::max(a.getX(),b.getX())) && (std::min(a.getY(),b.getY())<=point.getY())&&(point.getY()<=std::max(a.getY(),b.getY())))
				return 1; 
			else
				return 0;
		}
	}

	bool operator<(const Segment<T> &s) const
	{
		return std::min(this->a, this->b) < std::min(s.a, s.b);
	}

	T det_matrix(Point<int> z)
	{
		Point<T> x = this->a;
		Point<T> y = this->b;
		return(x.x*y.y+y.x*z.y+z.x*x.y-z.x*y.y-x.x*z.y-y.x*x.y);
	}

	bool isSegmentCross(const Segment<T> &s) const
	{
		return (this->det_matrix(s.a)*this->det_matrix(s.b) > 0) &&
			   (s->det_matrix(this->a)*s->det_matrix(this->b) > 0);
	}

};

template<class T>
class Polygonial
{
public:
	std::vector<Segment<T>> v;

	bool isPointinPoly(Point<T> p)
	{
		sort(v.begin(), v.end());
		bool f = false;
		Point<T> tmp_a(v[0].a.getX()-1, p.getY());
		Point<T> tmp_b(v[v.size()-1].a.getX()+1, p.getY());
		Segment<T> tmp(tmp_a, tmp_b);
		for(int i=0;i<v.size();i++)
		{
			if (v[i].isPointInSegment(p))
			{
				//std::cout << "Cross" << std::endl;
				f = !f;
			}
			if (v[i].a.getX()>p.getX())
				return f;
		}

		return false;
	}
};



int main()
{
	int n,k;
	std::cin >> n >> k;
	int a,b,c,d;
	std::cin >> a >> b;
	Point<int> x(a,b);
	Point<int> first(a,b);
	Polygonial<int> poly;
	for(int i=0;i<n;i++)
	{
		std::cin >> a >> b;
		Point<int> y(a,b);
		Segment<int> s(x,y);
		poly.v.push_back(s);
		x = y;
	}
	Segment<int> s(first,x);
	poly.v.push_back(s);
	for(int i=0;i<k;i++)
	{
		std::cin >> a >> b >> c >> d;
		Point<int> x(a,b);
		Point<int> y(c,d);
		bool in = poly.isPointinPoly(x);
		std::cout<<in<<std::endl;
	}
}

