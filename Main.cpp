#include <bits/stdc++.h>

using namespace std;

/*
 * this is where you will write code to edit your file
 * the example shows the way to read 3 integers and print them in seperate line
 */
void edit_input(ifstream &infile, ofstream &outfile){
    //EXAMPLE STARTS
    
    //simply take input
    int a,b,c;
    infile>>a>>b>>c;
    
    
    //print them as you like
    outfile<<a<<endl;
    outfile<<b<<endl;
    outfile<<c<<endl;
    
    //EXAMPLE ENDS
}

/*
 * This function generates the input file name from file number
 * by default the file names are input00.txt, input01.txt, input02.txt etc
 */
string getInputFileName(int file_no){
    string s=to_string(file_no);
    if(file_no >= 0 and file_no <= 9) s = "0" + s;
    return "input/input" + s + ".txt";
}


/*
 * This function generates the output file name from file number
 * by default output files names are similar to input file names but located in different folder
 * by default outfiles will go to edited_input folder, make sure the folder exists
 */
string getOutputFileName(int file_no){
    string s = to_string(file_no);
    if(file_no>=0 and file_no<=9) s = "0" + s;
    return "edited_input/input"+ s +".txt";
}

int main()
{
       for(int file_no=0; ;file_no++){
           
           string in = getInputFileName(file_no);
           string out = getOutputFileName(file_no);
           
           ifstream infile;
           ofstream outfile;
           
           infile.open(in, ios_base::out | ios_base::in);
           
           
           if (infile.is_open()){
            outfile.open (out);
            if(outfile.is_open()){
                cerr<<"EDITING "<<in<<" WRITING to "<<out<<endl;
                edit_input(infile, outfile);      
            }else{
                puts("Output directory doesn't exist, please create the directory");
                break;
            }     
            infile.close();
            outfile.close();
          }
          else break;
          
       }
       
}
