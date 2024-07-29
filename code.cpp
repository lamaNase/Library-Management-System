class Parent {
public:
        virtual void display() {
                   cout << "Display from Parent" << endl;
        }
};
> 

class Child : public Parent {
public:
        void display() override {
               cout << "Display from Child" << endl;
        }
};

int main() {
       Parent *parentPtr;
       Child childObj;
       parentPtr = &childObj;

```
parentPtr->display();  // Calls Child's display() due to virtual function
return 0;
```

}
