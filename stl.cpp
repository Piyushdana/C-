#include <bits/stdc++.h>
using namespace std;

// Stl is a Standard template library in c++ which provides is a software library for the
//  C++ language that provides a collection of templates representing containers, iterators,
//   algorithms, and function objects

// Stl has 4 major components 
// Algorithms
// Containers
// Functors
// Iterators


// lets first see about // Containers
// //////////////////// PAIR IN CONTAINER
// 1)Pairs With pair we can store 2 or more value in one variable

// Ex:-

// void pairExample(){
//     pair<int, int> p= {1,2};  //here we have paired two integers with one value
//     // to access the values from the variable we can use
//     cout<<p.first<<p.second; //it will give the values of the each place like first will give 1 and second will give 2

//     pair<int, pair<int, int>> p = {1,{2,3}}; //more than two value 
//     cout<<p.first<<p.second<<p.third; 


//     pair<int,int> arr[]={{1,2},{2,3},{3,4}};
//     cout<<arr[1].first<<arr[2].second<<arr[0].third; // here it will give like arr[1].first will give 2]

// }

// VECTOR IN CONTAINER
// Vector is similar like an array but we can modify vector anytime by adding and removing values
void vectorExample(){
/////////////////// how to create a vector///////////////////
    vector <int> v; //ve can give any datatype here
    v.push_back(1);
    v.emplace_back(2); 

    // Defining Vector of pair Data type
    vector <pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    // When you want to declare values together ex

    vector<int>v(5,100);            //here vector of Size with 5 is created with the 5 values which are 100
    vector<int>v(5)                 // When you want to declare only the size of the container and not the values 
                                    //here container of size 5 is created 
    vector<int>v1(5,20);
    vector<int>v2(v1);              //Here When  We have to make the copy of one element and put it in another vector same but different copy  in the 
                                    //example here a copy of v1 is created as v2 



  ///////////////////// Now how we can access elements in vector///////////////////

    // so one of the easiest way is to access as like we do in  array 
    cout<< /*First option*/ v[0]<<" "<< /*second option Which is not most used is this*/ v.at[1];

    // And other way is by using iterators
    // iterator is nothing but the one which points to the memory of the element 
    // Syntax of iterators is 
        //Ex values are [10,20,30,40]
        vector<int>::iterator anyName = v.begin();        // Here .begin() Will not give us the value rather 
                                                          // it will give us the address of the element and not 
                                                          // the value it will give address address 
        anyName++;               
        cout<<  *(anyName)<<"";                           // Now to access The element value from the
        //It will output the value 20 first give            // address we have to use star symbol and can get the 
        //the address of the element then incremented       // value of the element 
        //the th element vlaue of the incremented one is seen

        anyName=anyName+2;
        cout<<  *(anyName)<<""; 
        //it will output by incrementing it by two 
        //as same as above but by incrementing by two 

        // Other iterators are :-                     Ex[10,20,30,40]
        vector<int>::iterator anyName= v.end;        //It will point to not at the end but at the memory location
                                                     // which is write after 40 last element 
        vector<int>::iterator anyName= v.back;       // gives the last element                                         
        // Below both are not used much & not imp    
        vector<int>::iterator anyName= v.rend;       // it will work in reverse way it will point to memory location 
                                                     // after 10 point end point is 10
        vector<int>::iterator anyName= v.rbegin;     // it will work in reverse way it will point to memory location 
                                                     // here the start point is 40 start from end 



        ///////////////////// To print vectors by looping  in vectors///////////////////
        for(vector<int>::iterator anyName = v.begin(); anyName!=v.end();anyName++ ){
            cout<<*(anyName)<<"";
        }

        // Shortcut if you dont want to write this vector<int>::iterator fast the auto also automatically 
        //define the data type of the variable
        for(auto anyName = v.begin(); anyName!=v.end();anyName++ ){
            cout<<*(anyName)<<"";
        }

        // For Each like  method in iterators can be like it goes through each element and prints it
        for(auto anyName: v){
            cout<<anyName;
        }

   /////////////////// deletion of vectors///////////////////

   //Ex[10,20,30,23,45]
    v.erase(v.begin()+1);   // it will delete 20 and give new array as [10,30,23,45]

    //Ex[10,20,30,23,45]    If want to delete two or more together SYNTAX:-   v.erase(start , end)
    v.erase(v.begin()+1, v.begin()+4);   // it will delete 20,30,23 and give new array as [10,45] 
                     //NOTE IT WILL NOT THE DELETE THE END WHICH IS GIVEN IT WILL DELETE ONE BEFORE THE END


    // ////////////// INSERT FUNCTION IN VECTORS//////////////////////////
    
    vector<int>v(2,100);  //as we know it inserts two 100s in vector We got [100,100];
    /*Syntax v.insert(placeWhereToInsert, AndWhatToInsert)*/ 
    v.insert(v.begin(),300);        // this will add at the beginning we'll get[300,100,100];
    v.insert(v.begin()+1,2,10);     // when we want to insert two elements together it will give us [300,10,10,100,100]
    /*Syntax v.insert(placeWhereToInsert,HowMany, AndWhat)*/ 



    // To copy one vector in another 
    vector<int>copy(2,50); //[50,50]
   // to insert it in v
   v.insert(v.begin(),copy.begin(),copy.end()); //[50,50,300,10,10,100,100]

//    other methods
      v.size();
      v.pop_back();
      //v1[10,20];
      //v2[50,60];
      v1.swap(v2); // v1[60,50] v2[10,20]
      v.clear(); //Erases all elements of entire vector
      v.empty(); //Check Vector is empty or not if yes returns true else false





 ///////////////////// NEXT IS LIST IN CONTAINER  //  
//  LIST IS SIMILAR LIKE VECTOR
 void explainList(){
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_Front(5); //{5,2,4}
    ls.emplace_Front(6); //{6,2,4}

    // rest functions are same as vector
    // rend, rbegin, clear, insert, size , swap , begin,end 
 } 

     ///////////////////// NEXT IS Deque IN CONTAINER  //  
    //  Deque IS SIMILAR LIKE VECTOR and list
    void explainDeque(){
    list<int> ls;
    dq.push_back(2); //{2}
    dq.emplace_back(4); //{2,4}

    dq.push_Front(5); //{5,2,4}
    dq.emplace_Front(6); //{6,2,4}

    dq.pop_back(); //{5,2}
    dq.pop_Front(); //{2,4}


    // rest functions are same as vector
    // rend, rbegin, clear, insert, size , swap , begin,end 
 } 



    ///////////////////// NEXT IS STACK IN CONTAINER  //  
    //  Stack uses lifo method here we cannot use indexing to access elements 
    void explainStack(){
    stack<int> s;
    s.push(2); //{2}
    s.push(5); //{5,2}
    s.push(8); //{8,5,2}
    s.push(9); //{9,8,5,2}
    s.emplace(4)//{4,9,8,5,2}
    
    cout<<s.top(); //tells what is at the top of the stack  gives 4
    cout<<s.pop(); //removes from top removes 4 and give {9,8,5,2}
    cout<<s.top(); //Now after removing agin check  what is at the top of the stack  gives 9 so this way it works 
    cout<<s.size(); //gives stack size
    cout<<s.empty();//tells empty or not
    
    // rest functions are same as vector
    // rend, rbegin, clear, insert, size , swap , begin,end 




    ///////////////////// NEXT IS QUEUE IN CONTAINER  //  
    //  Queue uses fifo method here we cannot use indexing to access elements 
    // it is like line at the ticket counter
    void explainQueue(){
    stack<int> s;
    q.push(2); //{2}
    q.push(5); //{2,5}
    q.emplace(4)//{2,5,4}

    q.back() +=5; //add 5 in the last last digit which is 4 so 4+5=9
    cout<<q.back(); //prints 9
    cout<<q.front(); //prints 2
    q.pop() //removes first one which is 2

    cout<<q.front(); //prints 5


    q.pop() //removes first one which is 2


    // rest functions are same as vector,list,Deque,stack,
    // rend, rbegin, clear, insert, size , swap , begin,end 


    ///////////////////// NEXT IS PRIORITYQ IN CONTAINER  //  
    //  PRIORITY Q keeps greatest value at the top 
    // it is like line at the ticket counter 
    void explainPQ(){
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(12); //{12,5,2}
    pq.emplace(4)//{12,5,4,2}

    cout<<pq.top(); //prints 12
    pq.pop(); //prints {5,4,2}
    cout<<pq.top() //prints 5 because it is the largest among all

    //Minimum heap  Keeps the minimum number at top 
    priority_queue <int, vector<int>,greater<int>>pq
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(12); //{12,5,2}
    pq.emplace(4)//{12,5,4,2}

    cout<<pq.top();//gives 2 as top 

    // rest functions are same as vector,list,Deque,stack,
    // rend, rbegin, clear, insert, size , swap , begin,end 



    ///////////////////// NEXT IS SET IN CONTAINER  //  
    //  To know set we just have to keep only two imp point that it stores in sorted and unique values only  
    // it is like line at the ticket counter 
    void explainSet(){
    priority_queue<int> s;
    s.insert(5); //{5} 5added
    s.insert(2); //{5,2} 2added
    s.insert(5); //{5,2} 5 will be not added as it is there already 
    s.insert(6); //{5,2,6}    6 added 
     

    //  {1,2,3,4,5}
    auto anyName= st.find(3);       /// it also points to the address of the number the actual values  
    auto anyName=st.find(6);        /// if number is not present there it will point to address after the last element 

    //  {1,2,3,4,5}
    auto anyName= st.erase(5); //removes 5


    //  {1,2,3,4,5}
    auto anyName= st.erase(5); 
    st.erase(anyName); //also removes 5


    auto it1= st.find(2);
    auto it2 = st.find(4);
    //  {1,2,3,4,5}
    st.erase(it1, it2); //it removes between range and before of end given and not the end 2,3 will be deleted 


    // rest functions are same as vector,list,Deque,stack,
    // rend, rbegin, clear, insert, size , swap , begin,end


    //  Bounds :- Lower Bound And UpperBound

    
 } 


 ///////////////////// NEXT IS MultiSET IN CONTAINER  //  
    // Multiset is same as set But it not only store unique value only it store
    // it is like line at the ticket counter 
    void explainSet(){
    priority_queue<int> ms;
    ms.insert(1); //{5} 5added
    ms.insert(1); //{5,2} 2added
    ms.insert(1); //{5,2} 5 will be added Again 
    ms.insert(5); //{5,2,5,6} 6 added 
     

    //  {1,1,1,2,5}
     int cnt =ms.count(1);  //Tell total number of 1s available output3
    
    //  {1,1,1,1,5}
      ms.erase(ms.find(1)); //removes the only one 1 which is at first

    //  {1,1,1,1,5}
      ms.erase(ms.find(1),ms.find(1)+2); //removes the only one 1 which is at first

    // rest functions are same as vector,list,Deque,stack,
    // rend, rbegin, clear, insert, size , swap , begin,end
    //  what is lower bound Lower bound
    
 } 



    ///////////////////// NEXT IS Unordered set IN CONTAINER  //  
        void explainUSet() {
        unordered_set<int> st;
        //stores only unique and in unordered way rest all is same as set 
        // lower_bound and upper_bound function
        // does not works, rest all functions are same as above, it does not stores in any
        //particular order it has a better complexity
        // than set in most cases, except some when collision happens
    }



    ////////////////// NEXT IS MAP IN CONTAINER  ///////////////////
    // Map are used To store value in key value pairs it stores unique key in sorted order  

    // To define map we can use 
    /*1)*/   map<int,int>mpp;  //here first int is key second is value
    /*2)*/  map<int,pair<int,int>mpp //Here is declared one key and two values
    /*3)*/  map<pair<int,int>,int> mpp;//Here is declared Two key and one values


    // To define values to map we can use below methods 
        mpp[1]=2;
        mpp.emplace({3,1});
        mpp.insert[{2,4}];
        mpp[{2,3}]=10;


        for(auto it :mpp){
            cout<< it.first << " " <<it.second<<endl;
        }

        cout<<mpp[1];  // returns the value of first key 
        cout<<mpp[5];   //return 0 as the value is not there

        auto it=mpp.find(3);
        cout<< *(it).second;   //gives the second value of the key 3


        // Lower bound and upper bound 


        // rest functions are same as vector,list,Deque,stack,
        // rend, rbegin, clear, insert, size , swap , begin,end


        ////////////////// NEXT IS MultiMAP IN CONTAINER  ///////////////////
        // everything is same as map only it can store multiple keys


        ////////////////// NEXT IS UnorderedMAP IN CONTAINER  ///////////////////
        // everything is same as map only it stores uniques keys in unordered way 




        // So here almost Containers are over
 }   


// Lets Start Algorithm 

{

    void explainExtra(){
    //    Ex Suppose we want to sort array an array we can simple do it by stl Algorithms
    // Ex [1,6,5,3,2];
        sort(a,a+n);    //Syntax     a is the start and a+n is the end 
        sort(v.begin(),v.end()); //syntax 

    // so it will give sorted array as [1,2,3,5,6]

    // Suppose we want to sort only some value inside the array
    sort(a+2,a+4); //here it will sort from 2 to less than 4
    // so it will [1,3,5,6,2];

    // Support We want to store it in decreasing order
    //for that we just have use one in built method greater<int> 
    // ex
    sort(a,a+n,greater<int>); //will give desending sorted order 

    
}       


}