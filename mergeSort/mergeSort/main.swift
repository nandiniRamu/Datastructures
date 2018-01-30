//
//  main.swift
//  mergeSort
//
//  Created by avinash on 10/19/17.
//  Copyright © 2017 abc. All rights reserved.
//

import Foundation


let components =  readLine()?.components(separatedBy: " ").map({Int( $0 ) })

let query = components![1]!
let sequence = components![0]!

let sequences = Array(repeating: Array(repeating:0,count: query) , count: sequence)

print(sequences[0][0])






