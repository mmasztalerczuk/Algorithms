 #include <bits/stdc++.h> 
using namespace std; 

char page[60][60];
    char blank[5][6] = {  
        {'.', '.', '.', '.', '.', '.'} ,  
        {'.', '.', '.', '.', '.', '.'} , 
        {'.', '.', '.', '.', '.', '.'} , 
        {'.', '.', '.', '.', '.', '.'} , 
        {'.', '.', '.', '.', '.', '.'} , 
        };  
    char a[5][6] = {  
        {'.', '*', '*', '*', '.', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '*', '*', '*', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        };
    char b[5][6] = {  
        {'*', '*', '*', '*', '.', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '*', '*', '*', '.', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '*', '*', '*', '.', '.'} , 
        };
    char c[5][6] = {  
        {'.', '*', '*', '*', '*', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '.', '.'} , 
        {'*', '.', '.', '.', '.', '.'} , 
        {'.', '*', '*', '*', '*', '.'} , 
        };   
    char d[5][6] = {  
        {'*', '*', '*', '*', '.', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '*', '*', '*', '.', '.'} , 
        }; 
    char e[5][6] = {  
        {'*', '*', '*', '*', '*', '.'} ,  
        {'*', '.', '.', '.', '.', '.'} , 
        {'*', '*', '*', '.', '.', '.'} , 
        {'*', '.', '.', '.', '.', '.'} , 
        {'*', '*', '*', '*', '*', '.'} , 
        };    
    char f[5][6] = {  
        {'*', '*', '*', '*', '*', '.'} ,  
        {'*', '.', '.', '.', '.', '.'} , 
        {'*', '*', '*', '.', '.', '.'} , 
        {'*', '.', '.', '.', '.', '.'} , 
        {'*', '.', '.', '.', '.', '.'} , 
        };   
    char g[5][6] = {  
        {'.', '*', '*', '*', '*', '.'} ,  
        {'*', '.', '.', '.', '.', '.'} , 
        {'*', '.', '.', '*', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'.', '*', '*', '*', '.', '.'} , 
        };
    char h[5][6] = {  
        {'*', '.', '.', '.', '*', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '*', '*', '*', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        };
    char i[5][6] = {  
        {'*', '*', '*', '*', '*', '.'} ,  
        {'.', '.', '*', '.', '.', '.'} , 
        {'.', '.', '*', '.', '.', '.'} , 
        {'.', '.', '*', '.', '.', '.'} , 
        {'*', '*', '*', '*', '*', '.'} , 
        };
    char j[5][6] = {  
        {'.', '.', '*', '*', '*', '.'} ,  
        {'.', '.', '.', '*', '.', '.'} , 
        {'.', '.', '.', '*', '.', '.'} , 
        {'*', '.', '.', '*', '.', '.'} , 
        {'.', '*', '*', '.', '.', '.'} , 
        };
    char l[5][6] = {  
        {'*', '.', '.', '.', '.', '.'} ,  
        {'*', '.', '.', '.', '.', '.'} , 
        {'*', '.', '.', '.', '.', '.'} , 
        {'*', '.', '.', '.', '.', '.'} , 
        {'*', '*', '*', '*', '*', '.'} , 
        };
    char k[5][6] = {  
        {'*', '.', '.', '.', '*', '.'} ,  
        {'*', '.', '.', '*', '.', '.'} , 
        {'*', '*', '*', '.', '.', '.'} , 
        {'*', '.', '.', '*', '.', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        };
    char m[5][6] = {  
        {'*', '.', '.', '.', '*', '.'} ,  
        {'*', '*', '.', '*', '*', '.'} , 
        {'*', '.', '*', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        };
    char n[5][6] = {  
        {'*', '.', '.', '.', '*', '.'} ,  
        {'*', '*', '.', '.', '*', '.'} , 
        {'*', '.', '*', '.', '*', '.'} , 
        {'*', '.', '.', '*', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        };
    char o[5][6] = {  
        {'.', '*', '*', '*', '.', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'.', '*', '*', '*', '.', '.'} , 
        };
    char p[5][6] = {  
        {'*', '*', '*', '*', '.', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '*', '*', '*', '.', '.'} , 
        {'*', '.', '.', '.', '.', '.'} , 
        {'*', '.', '.', '.', '.', '.'} , 
        };
    char q[5][6] = {  
        {'.', '*', '*', '*', '.', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '*', '*', '.'} , 
        {'.', '*', '*', '*', '*', '.'} , 
        };
    char r[5][6] = {  
        {'*', '*', '*', '*', '.', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '*', '*', '*', '.', '.'} , 
        {'*', '.', '.', '*', '.', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        };
    char s[5][6] = {  
        {'.', '*', '*', '*', '*', '.'} ,  
        {'*', '.', '.', '.', '.', '.'} , 
        {'.', '*', '*', '*', '.', '.'} , 
        {'.', '.', '.', '.', '*', '.'} , 
        {'*', '*', '*', '*', '.', '.'} , 
        };
    char t[5][6] = {  
        {'*', '*', '*', '*', '*', '.'} ,  
        {'*', '.', '*', '.', '*', '.'} , 
        {'.', '.', '*', '.', '.', '.'} , 
        {'.', '.', '*', '.', '.', '.'} , 
        {'.', '*', '*', '*', '.', '.'} , 
        };
    char u[5][6] = {  
        {'*', '.', '.', '.', '*', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        {'.', '*', '*', '*', '.', '.'} , 
        };
    char v[5][6] = {  
        {'*', '.', '.', '.', '*', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'.', '*', '.', '*', '.', '.'} , 
        {'.', '*', '.', '*', '.', '.'} , 
        {'.', '.', '*', '.', '.', '.'} , 
        };
    char w[5][6] = {  
        {'*', '.', '.', '.', '*', '.'} ,  
        {'*', '.', '.', '.', '*', '.'} , 
        {'*', '.', '*', '.', '*', '.'} , 
        {'*', '*', '.', '*', '*', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        };
    char x[5][6] = {  
        {'*', '.', '.', '.', '*', '.'} ,  
        {'.', '*', '.', '*', '.', '.'} , 
        {'.', '.', '*', '.', '.', '.'} , 
        {'.', '*', '.', '*', '.', '.'} , 
        {'*', '.', '.', '.', '*', '.'} , 
        };
    char y[5][6] = {  
        {'*', '.', '.', '.', '*', '.'} ,  
        {'.', '*', '.', '*', '.', '.'} , 
        {'.', '.', '*', '.', '.', '.'} , 
        {'.', '.', '*', '.', '.', '.'} , 
        {'.', '.', '*', '.', '.', '.'} , 
        };
    char z[5][6] = {  
        {'*', '*', '*', '*', '*', '.'} ,  
        {'.', '.', '.', '*', '.', '.'} , 
        {'.', '.', '*', '.', '.', '.'} , 
        {'.', '*', '.', '.', '.', '.'} , 
        {'*', '*', '*', '*', '*', '.'} , 
        };
void print_c(int xx, int yy, char ch[][6]) {
    //printf("Invoke\n");
    for(int i=0;i<5;i++)
        for(int j=0;j<6;j++) {
            if (xx+j >= 0 && xx+j < 60 && yy+i >= 0 && yy+i < 60 && ch[i][j] != '.'){
                page[yy+i][xx+j] = ch[i][j];
                //printf("OK %d %d %c\n", xx+j, yy+i, ch[i][j]);
            } else {
                //p/rintf("Error %d %d %c\n", xx+j, yy+i, ch[i][j]);
            }
        }
}
void print(int xx, int yy, char cq) {
    switch(cq) {
        case 'A':
            print_c(xx,yy,a);
            break;
        case 'B':
            //printf("B\n");
            print_c(xx,yy,b);
            break;
        case 'C':
            print_c(xx,yy,c);
            break;
        case 'D':
            print_c(xx,yy,d);
            break;
        case 'E':
            print_c(xx,yy,e);
            break;
        case 'F':
            print_c(xx,yy,f);
            break;
        case 'G':
            print_c(xx,yy,g);
            break;
        case 'H':
            print_c(xx,yy,h);
            break;
        case 'I':
            print_c(xx,yy,i);
            break;
        case 'J':
            print_c(xx,yy,j);
            break;
        case 'K':
            print_c(xx,yy,k);
            break;
        case 'L':
            print_c(xx,yy,l);
            break;
        case 'M':
            print_c(xx,yy,m);
            break;
        case 'N':
            print_c(xx,yy,n);
            break;
        case 'O':
            print_c(xx,yy,o);
            break;
        case 'P':
            print_c(xx,yy,p);
            break;
        case 'Q':
            print_c(xx,yy,q);
            break;
        case 'R':
            print_c(xx,yy,r);
            break;
        case 'S':
            print_c(xx,yy,s);
            break;
        case 'T':
            print_c(xx,yy,t);
            break;
        case 'W':
            print_c(xx,yy,w);
            break;
        case 'U':
            print_c(xx,yy,u);
            break;            
        case 'Y':
            print_c(xx,yy,y);
            break;
        case 'V':
            print_c(xx,yy,v);
            break;            
        case 'X':
            print_c(xx,yy,x);
            break;
        case 'Z':
            print_c(xx,yy,z);
            break;                                              
    }
}

int main()  
{  
        string cmd;
            for (int ii=0;ii<60;ii++) {
        for (int jj=0;jj<60;jj++) {
            page[ii][jj] = '.';
        }
    }
    //cin>>cmd;
while (cin >> cmd) {
    if (cmd[1]=='E') {
            for (int ii=0;ii<60;ii++) {
        for (int jj=0;jj<60;jj++) {
            cout<<page[ii][jj];
        }
        cout<<endl;
    }
    cout<<endl<<"------------------------------------------------------------"<<endl<<endl;
        for (int ii=0;ii<60;ii++) {
        for (int jj=0;jj<60;jj++) {
            page[ii][jj] = '.';
        }
    }
    }
    else if (cmd[1] == 'C')
    {
        cin>>cmd;
        if (cmd[1]== '5') {
             int row;
             cin>>row;
             row--;
             //cin>>cmd;
            string s = ""; //cmd;
            getline(cin, cmd);
             cmd = cmd.substr(1);
             int size = cmd.length()-2;
            // printf("Big:%s\n", cmd);
             //printf("%d\n", size);
             if (size%2==0) {
                 for(int ii=0;ii<size/2;ii+=1) {
                     print(30+ii*6,row,cmd[ii+size/2+1]);
                 }
                 for(int ii=1;ii<size/2+1;ii+=1) {
                     print(30-ii*6,row,cmd[size/2-ii+1]);
                 }
             }
             else {
                 //printf("Size: %d", size);
                 
                 for(int ii=0;ii<=size/2;ii+=1) {
                     print(27+ii*6,row,cmd[ii+size/2+1]);
                 }
                 
                 for(int ii=1;ii<size/2+1;ii+=1) {
                     print(27-ii*6,row,cmd[size/2-ii+1]);
                 }
             }
        } else {
               // printf("SMALL");
             int row;
             cin>>row;
             row--;
             //cin>>cmd;
             string s = "";//cmd;
            getline(cin, cmd);
             cmd = cmd.substr(1);
             int size = cmd.length()-2;
            // printf("%d\n", size);
           //  printf("Size small: %d", size);
          //  printf("Small:%s\n", cmd);
             if (size%2==0) {
                 for(int ii=0;ii<size/2;ii+=1) {
                     //print(31+ii*6,row,cmd[ii+size/2+1]);
                     if (cmd[ii+size/2+1] != ' ' && 30+ii >=0 && 30+ii<60)
                        page[row][30+ii] = cmd[ii+size/2+1];
                 }
                 for(int ii=1;ii<size/2+1;ii+=1) {
                     //print(31-ii*6,row,cmd[size/2-ii+1]);
                     if (cmd[size/2-ii+1] != ' ' && 30-ii >=0 && 30-ii<60)
                     page[row][30-ii] = cmd[size/2-ii+1];
                 }
             }
             else {
                 for(int ii=0;ii<=size/2;ii+=1) {
                     //print(28+ii*6,row,cmd[ii+size/2+1]);
                     if (cmd[ii+size/2+1] != ' ' && 30+ii >=0 && 30+ii<60)
                     page[row][30+ii] = cmd[ii+size/2+1];
                 }
                 for(int ii=1;ii<size/2+1;ii+=1) {
                     //print(28-ii*6,row,cmd[size/2-ii+1]);
                     if (cmd[size/2-ii+1] != ' ' && 30-ii >=0 && 30-ii<60)
                     page[row][30-ii] = cmd[size/2-ii+1];
                 }
             }

        }
    }
    else if (cmd[1] =='P') {
        cin>>cmd;
        if (cmd[1]== '5') {
             int row;
             int column;
             cin>>row;
             row--;
             cin>>column;
             column--;
                         string s = ""; //cmd;
            getline(cin, cmd);
             cmd = cmd.substr(1);
             int size = cmd.length()-2;
            //printf("MAariusz %d %s\n", size, cmd);
            //printf("wwwwwwwwwwww%d %d\n");
            for(int ii=0;ii<size;ii+=1) {
                //printf("%d %d\n",column+ii*6,row);
                print(column+ii*6,row,cmd[ii+1]);
            }

             

        } else {
             int row;
             int column;
             cin>>row;
             row--;
             cin>>column;
             column--;
            getline(cin, cmd);
             cmd = cmd.substr(1);
           // cmd = s;
             int size = cmd.length()-2;
            // printf("%d\n", size);
            for(int ii=0;ii<size;ii+=1) {
                //print(31+ii*6,row,cmd[ii+size/2+1]);
                if (cmd[ii+1] != ' ' && column+ii < 60 && column+ii >=0)
                page[row][column+ii] = cmd[ii+1];
            }
             

        }
    }    
    else if (cmd[1] =='L') {
        cin>>cmd;
        if (cmd[1]== '5') {
             int row;
             cin>>row;
             row--;
            getline(cin, cmd);
             cmd = cmd.substr(1);
          
             int size = cmd.length()-2;
             //printf("%d\n", size);

                for(int ii=0;ii<size;ii+=1) {
                    print(ii*6,row,cmd[ii+1]);
                }

             

        } else {
             int row;
             cin>>row;
             row--;
            getline(cin, cmd);
             cmd = cmd.substr(1);
             int size = cmd.length()-2;
            // printf("%d\n", size);
            for(int ii=0;ii<size;ii+=1) {
                //print(31+ii*6,row,cmd[ii+size/2+1]);
                if (cmd[ii+1] != ' ' && ii < 60)
                    page[row][ii] = cmd[ii+1];
            }
             

        }
    }
    else if (cmd[1] =='R') {
        cin>>cmd;
        if (cmd[1]== '5') {
             int row;
             cin>>row;
             row--;
            getline(cin, cmd);
             cmd = cmd.substr(1);
         //   cmd = s;;
             int size = cmd.length()-2;
           //  printf("!!!%d\n", size);

            for(int ii=0;ii<size;ii+=1) {
                print(54-ii*6,row,cmd[size-ii]);
            }

             

        } else {
             int row;
             cin>>row;
             row--;
            getline(cin, cmd);
             cmd = cmd.substr(1);
            //cmd = s;
             int size = cmd.length()-2;
           //  printf("%d\n", size);
            for(int ii=0;ii<size;ii+=1) {
                //print(31+ii*6,row,cmd[ii+size/2+1]);
                if (cmd[size-ii] != ' ' && 59-ii < 60 && 59-ii >=0)
                    page[row][59-ii] = cmd[size-ii];
            }
             

        }
    }
}
    //cout<<"?";

}
  