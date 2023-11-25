
// //  #include <iostream>
// //  using namespace std;


// //  int main()
// //  {
	
	
// // 	for (int i = 1; i <= 10; ++i){
// //     cout<<i<<" "<<endl;
// //       for(int j = 1; j <= 10; ++j){
// //             cout << i*j <<" ";
// //     }
// // 	cout << endl;
// // 	return 0;
// // }
// // }

// #include <iostream>

// using namespace std;

// int main() {
//     int rows;
//     cout << " number of rows: ";
//     cin >> rows;

//     for (int i = 1; i <= rows; ++i) {
        
//         for (int j = 1; j <= rows; ++j) {
//             cout << " ";
//         }
        
//         for (int k = 1; k <= i; ++k) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }
//pyramid
// #include <iostream>
// using namespace std;


// int main()
// {
// 	int n = 5;

	
// 	for (int i = n; i > 0; i--) {
// 		for (int j = 1; j <= n; j++) 
// 		{
// 			if (j >= i) {
// 				cout << "* ";
// 			}
// 			else {
// 				cout << " ";
// 			}
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }
// int main() {
//     int i;
//     cin>>i;
//     for (i=0; i<=n; i++){
//         cout<< " ";
//     }

//     for(int j = 0; j < n-i; j++){
//         cout<< " * "<<endl;
//     }
//     return 0   ;
// }


#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    // for (int i = 1; i <= rows; i++) {
        
    //     for (int j = 1; j < i; j++) {
    //         cout << " ";
    //     }

 
    //     if (i % 2 == 1) {
    //         cout << "*";
    //     } else {
    //         cout << "#";
    //     }

       
    //     for (int k = i + 1; k <= rows; k++) {
    //         if (k % 2 == 1) {
    //             cout << "*";
    //         } else {
    //             cout << "#";
    //         }
    //     }

      
    //     cout << endl;
    // }
    for (int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            if((i+j) %2==0){
                cout << "#";
            }
            else{
                cout << "*";
            }
    }
    cout<<"\n";

    return 0;
}
}