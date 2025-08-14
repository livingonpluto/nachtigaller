#include <iostream>
#include <fstream>  //Input file stream class
#include <nlohmann/json.hpp>
#include <ostream>
#include <random>
#include <stdexcept>



using namespace std;




int randomNumber(){
    std::random_device rd; // obtain a random number from hardware
   	 std::mt19937 gen(rd()); // seed the generator
   	 std::uniform_int_distribution<> distr(1, 50); // define the range

   	 
    return distr(gen);
}

int main(){

    int id = 3;

    
   
    try{
        
        
        id = randomNumber();
        
        ifstream file("../data/lexikon.json");
        if(!file)throw runtime_error("File not found");
        nlohmann::json data = nlohmann::json::parse(file);

        for(auto& article : data){
                if(article["id"]== id){
                    cout 
                    << "\n\n"
                    << article["title"] 
                    << "\n\n" 
                    << article["content"]    
                    << endl;

                    return 0;
                }
        }

    }catch(const exception& e){
        cerr << e.what()<<endl;
        return 1;
    }

   
    
}
