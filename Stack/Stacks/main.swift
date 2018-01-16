//
//  main.swift
//  Stacks
//
//  Created by Nandini  on 1/16/18.
//  Copyright © 2018 Nandini . All rights reserved.
//

import Foundation



print("*********** Stack Example ***********")

let stack = Stack<Int>()
var choice = -1
repeat { 
print ("Stack Operations")
print("--------------------")
print("1.Push", "2.Pop","3.Display", "4.Exit", separator:"\n", terminator : "\n")
   
    switch choice
    {
    case 1:
        print("Enter data to push")
        if let data = readLine()
        {
           if let d = Int(data){
             stack.push(data: d)
           }
           else {
            print("Enter Integer Value")
            }
        }
        else {
            print("Enter a Value")
        }
    case 2 :
        stack.pop()
    case 3 :
        stack.display()
    case 4:
        exit(0)
    default:
        print("Invalid option")
    }
    
}while choice != 4





