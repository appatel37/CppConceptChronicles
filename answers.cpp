A. 

template<typename T>
T multi(const T* x, int n){
    T mult{};
    for (int i = 0; i < n; i++)
        mult *= x[i];
        return mult;
    
}

B.

template<typename T>            // compusory when start the function
T& larger(const T& p1, const T& p2){
    T large = p1;
    if(p2>p1){
        large = p2;
    }
    return large;
}


// -> small question but worth 15% of the finals. IMP topic. 15% * 30 marks = 4.5 marks

// what type of resources does class need the template
// what template to use in any class

// equal operator, 