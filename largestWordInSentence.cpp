#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int start=0,maxStart=0;
    int i=0;
    int currLen=0,maxLen=0;

    while(1){
        if(arr[i]==' ' || arr[i]== '\0'){
            if(currLen>maxLen){
                maxLen=currLen;
                maxStart=start;
            }
            currLen=0;
            start=i+1;
        }
        else{
            currLen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0;i<maxStart;i++){
        cout<<arr[i+maxStart];
    }
    return 0;
}