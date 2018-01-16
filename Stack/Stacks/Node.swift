//
//  Node.swift
//  Stacks
//
//  Created by Nandini  on 1/16/18.
//  Copyright © 2018 Nandini . All rights reserved.
//

import Cocoa
let STACK_SIZE = 10

class Node<T>{
    var data : T!
    var next : Node!
}

class Stack<T> {
    
    var top  = -1
    var nodes = [Node<T>?](repeating : nil, count : STACK_SIZE)
  
   
    func push(data : T){
        let nodeElement = Node<T>()
        nodeElement.data = data
        if top < STACK_SIZE{
            top += 1
            nodes[top] = nodeElement
        }
        else {
            print("Stack Overflow\n")
        }
    }
    
    func pop(){
        if (top != 0){
           nodes.removeLast()
            top -= 1
        }
        else {
            print("Stack Underflow\n")
        }
    }
    func display(){
        var i = top
        while i >= 0
        {
          print("\( nodes[i]!.data!)")
            i -= 1
        }
    }
}
