#include "main.h"

using namespace Json;
int main()
{

Json::Reader reader;
Json::Value wholefile;
using namespace std;
string file("/home/likewise-open/RADIXLOCAL/nishant.bijani/project/ripdraw/test/device/src2/tests/valid.json");

if(reader.parse(file,wholefile,false))
 	 {
      perror("Parsing Error!!!\n");
      ///exit(1);

     }
vector <std::string> list=wholefile.getMemberNames();
std::cout<<list.at(0);
wholefile.begin();

//std::string output_string = vector. get("key","default value").asString();
	//	  std::cout << "key: " << output_string << std::endl;

//std::cout<<;
for(int i=0;i<wholefile.size();i++)
{

	switch(wholefile.get(list.at(i),"bydefault").type())
	{
	case stringValue:
         	 	 	 cout<<"string"<<endl;
         	 	 	 break;

	case nullValue:
	         	 	 cout<<"nullValue"<<endl;
	         	 	 break;
	case intValue:
	         	 	 cout<<"intValue"<<endl;
	         	 	 break;
	case uintValue:
	         	 	 cout<<"uintValue"<<endl;
	         	 	 break;
	case realValue:
	         	 	 cout<<"realValue"<<endl;
	         	 	 break;
	case booleanValue:
	         	 	 cout<<"booleanValue"<<endl;
	         	 	 break;

	case arrayValue:
	         	 	 cout<<"arrayValue"<<endl;
	         	 	 break;

	case objectValue:
	         	 	 cout<<"objectValue"<<endl;

	         	 	 break;


  }

}
}













//bool PrintJSONTree( Json::Value &root, unsigned short depth /* = 0 */);
//void PrintJSONValue( Json::Value &val );
/*
int main()
{

char path[150]="/home/likewise-open/RADIXLOCAL/nishant.bijani/project/ripdraw/test/device/src2/tests/valid.json";
	FILE *fp;
	char* data;

	fp=fopen(path,"rb+");
		fseek(fp,0,2);
		long length= ftell(fp);

		printf("length is: %ld\n",length);
	//fseek(fp,-length,SEEK_END);
		rewind(fp);

		data=(char *)malloc((length+1) * sizeof(char));


		fread(data,sizeof(char),length+1,fp);

		fclose(fp);


	Json::Reader reader;
	Json::Value root;
	Json::Value output;
	  if (reader.parse(data, root))  // readerJsonroot?rootJson
	  {

		  output=root.operator[]( "web-app" );
		//  PrintJSONTree(root,9);

	  }

}
*/

//	bool PrintJSONTree( Json::Value &root, unsigned short depth /* = 0 */)
	/*
	{
	    depth += 1;
	  //  printf( " {type=[%d], size=%d}", root.type(), root.size() );
	    if( root.size() > 0 )
	    {
	        printf("\n");
	        for( Json::ValueIterator itr = root.begin() ; itr != root.end() ; itr++ )
	        {
	            // Print depth.
	          //  printf(" subvalue(");
	            Json::Value process= itr.key();
	            PrintJSONValue(process);
	           // printf(") -");
	            PrintJSONTree( *itr, depth);
	          }
	        return true;
	      }
	    else
	    {
	        printf(" ");
	        PrintJSONValue(root);
	        printf( "\n" );
	    }
	    return true;
	}




	void PrintJSONValue( Json::Value &val )
	{
	    if( val.isString() )
	    {
	        printf( "%s:-> ", val.asString().c_str() );
	    } else if( val.isBool() )
	    {
	        printf( "%d:->  ", val.asBool() );
	    } else if( val.isInt() )
	    {
	        printf( "%d: ->  ", val.asInt() );
	    } else if( val.isUInt() )
	    {
	        printf( "%u :-> ", val.asUInt() );
	    } else if( val.isDouble() )
	    {
	        printf( "%f :-> ", val.asDouble() );
	    }
	    else
	    {
	        printf( "%d :->  ", val.type() );
	    }
	}


*/

















/*
int main()
{
	char path[150]="/home/likewise-open/RADIXLOCAL/nishant.bijani/project/ripdraw/test/device/src2/tests/ext-valid-0001.json";
	FILE *fp;
	char* data;

	fp=fopen(path,"rb+");
		fseek(fp,0,2);
		long length= ftell(fp);

		printf("length is: %ld\n",length);
	//fseek(fp,-length,SEEK_END);
		rewind(fp);

		data=(char *)malloc((length+1) * sizeof(char));


		fread(data,sizeof(char),length+1,fp);

		fclose(fp);


	Json::Reader reader;
	  Json::Value root;
	  if (reader.parse(data, root))  // readerJsonroot?rootJson
	  {
		 // Json::Value s = root. get("title","default value");


		  std::string output_string = root. get("key","default value").asString();
		  std::cout << "key: " << output_string << std::endl;

		  int myinteger_value = root.get("another_key", Json::Value(0) ).asInt();
		    std::cout << "another_key: " << myinteger_value << std::endl;


		  /* std::string upload_id = root["title"].asString();
	    int file_size = root["\\"].size();
	 */

	/*
	Json::Value got = root.get ("title",0);
		  printf( "size is  %d\n", got.size());


		  //printf("size is: %d\n",file_size);
	//          printf("title is: %s\n",reader);
	  }
printf("Done!!!!!!");
	  return 0;

}

*/





/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
char *path="/home/likewise-open/RADIXLOCAL/nishant.bijani/project/ripdraw/test/device/src2/tests/ext-valid-0003.json";
FILE *fp;
char *data,ch;

        fp=fopen(path,"r+");
          if(fp==NULL)
           {
            printf("error in opening file\n");
            exit(1);
            }
        fseek(fp,0,SEEK_END);
        long length=0;
        length= ftell(fp);
        rewind(fp);
   //     printf("after rewind\n");
        data=(char *)malloc((length+1)*sizeof(char));
         if(data==NULL)
        	 printf("no sufficient size available\n");

     //   printf("size of data is: %d\n",sizeof(data));
   //    while((ch=fgetc(fp))!=EOF)
    //     fputc(ch,);
        int read=fread(data,sizeof(char),length,fp);
        printf("%s\n",data);
        printf("readed= %d\n",read);
        printf("After reading\n");


        //json_value* result =json_parse(data,length+1);


        if(fclose(fp)!=0)
           printf("Error in closing file\n");
printf("Done!\n");
return 0;
}



*/



/*
int main(int argc, char **argv)
{
char path[150]="/home/likewise-open/RADIXLOCAL/nishant.bijani/project/ripdraw/test/device/src2/tests/valid-0008.json";
FILE *fp;
json_char* data;
	fp=fopen(path,"rb+");
	fseek(fp,0,SEEK_END);
	long length= ftell(fp);

	printf("length is: %ld\n",length);
//fseek(fp,-length,SEEK_END);
	rewind(fp);

	data=(char *)malloc((length+1) * sizeof(char));


	fread(data,sizeof(char),length+1,fp);

	fclose(fp);
*/
/*	while(*data!='\0')
	{
	 printf("%c",*data);
	 data++;
	}
*/
/*

json_value* result =json_parse(data,length+1);
//json_stringify(result);
printf("Done!\n");

}
*/
