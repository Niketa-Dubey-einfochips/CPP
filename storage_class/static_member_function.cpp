/*Static member functions are functions that do not require an instance of the class,
 and are called the same way you access static member variables -- with the class name rather than a variable name.
(E.g. a_class::static_function(); rather than an_instance.function();) Static member functions can only operate on static members,
as they do not belong to specific instances of a class.
Static member functions can be used to modify static member variables to keep track of their values 
-- for instance, you might use a static member function if you chose to use a counter to give each instance of a class a unique id. */

class user
{
  private:
  int id;
  static int next_id;
 
  public:
  static int next_user_id()
  {
    next_id++;
    return next_id;
  }
  /* More stuff for the class user */
  user()
  {
    id = user::next_id++; //or, id = user.next_user_id();
  }
};
int user::next_id = 0;
int main()
{
    user u1;
   cout<< u1.next_user_id()<<endl;
}