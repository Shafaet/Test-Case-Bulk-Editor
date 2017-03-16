#include <bits/stdc++.h>

using namespace std;

const string INPUT_FOLDER = "inputs";
const string OUTPUT_FOLDER = "edited_inputs";

/*
 * this is where you will write code to edit your file
 * the example shows the way to read 3 integers and print them in seperate line
 */
void editInput(ifstream &infile, ofstream &outfile)
{
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
 * This function generates the file name from file number
 */
string getFileName(string folder_name, int file_no)
{
    string s=to_string(file_no);
    if(file_no >= 0 and file_no <= 9) s = "0" + s;
    return folder_name + "/input" + s + ".txt";
}

int main()
{
        //Don't edit unless you know what you are doing

       for(int file_no=0; ;file_no++){

           string in = getFileName(INPUT_FOLDER, file_no);
           string out = getFileName(OUTPUT_FOLDER, file_no);

           ifstream infile;
           ofstream outfile;

           infile.open(in, ios_base::out | ios_base::in);

           if(!infile.is_open()) break; //There is no more file to process

           outfile.open(out);

           if(!outfile.is_open()) {
               cout<<"Output directory doesn't exist, please create the directory"<<endl;
               break;
           }

           cerr<<"EDITING: "<<in<<" WRITING to: "<<out<<endl;
           editInput(infile, outfile);

           infile.close();
           outfile.close();
       }
}
