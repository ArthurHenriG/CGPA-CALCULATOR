#include <iostream>
#include <math.h>
#include <map>
#include <vector>
#include <string>


int numberOfCourses(){
    int numCourses{};
    
     while (true)
        {
    std::cout<<"Write the number of courses taken: "<<"\n";
    std::cin>>numCourses;
     
     if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                       '\n');
         std::cout<<"Write a valid integer"<<"\n";
         
     }else{
         break;
     }

        }
          return numCourses;
}

std::string courseTaken(){

     std::cout<<"Name of the course taken: "<<"\n";
     std::string courseName{};
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     std::getline(std::cin,courseName);
     return courseName;
}

int totalGrades(){

    int numGrades{};
   
     while (true)
        {
     std::cout<<"Write the number of grades : "<<"\n";
     std::cin>>numGrades;
     
     if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                       '\n');
         std::cout<<"Write a valid integer "<<"\n";
         
     }else{
         break;
     }

        }
    return numGrades;
}

int totalCredits(){

    int credits{};
    
     while (true)
        {
     std::cout<<"Write your credits of the course typed before : "<<"\n";
     std::cin>>credits;
     
     if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                       '\n');
         std::cout<<"Write a valid integer "<<"\n";
         
     }else{
         break;
     }

}

    return credits;
}

struct courseMarks{
 std::vector<std::string> grades;
 int credits{};
};

void userInput(){
    std::map<std::string, courseMarks> courseMap;
    
    int count=numberOfCourses();
    std::string grade{};

    for(int i=0;i<count;i++){
       std::string subject{courseTaken()};
       int numGrades{totalGrades()};
       int credits{totalCredits()};
       
       std::vector<std::string> grades;
        
        for(int j=0;j<numGrades;j++){
         std::cout<<"Type your grade : "<<"\n";
         std::cin>>grade;
         grades.push_back(grade);
        }

        courseMap[subject]={grades, credits};

    }

    for (const auto& course : courseMap) {
        std::cout << "Course: " << course.first << ", Credits: " << course.second.credits << ", Grades: ";
        for (std::string grade : course.second.grades) {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
    }


}

void gpa(){

}

void cgpa(){

}





int main(){
    userInput();
    return 0;
}