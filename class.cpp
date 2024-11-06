#include <iostream>
using namespace std;
class Database
{
  private:
      static Database *DB;
      
       //private constructor
       Database() {  }
  public:
     //static method
     static Database *getDB()
     { 
         if (DB == NULL) 
            DB = new Database();
     
         return DB;
     }

};
Database* Database::DB=NULL;

int main()
{
	Database *db = Database::getDB();
 //db.getDB();
//db->someMethod();


    return 0;
}

