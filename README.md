# Conway's Game of Life
**C++**

An adaptive recreation of Conway's fascinating cellular automata. 

## Purpose
When outlining the algorithm for this project I wanted it to ensure it was adaptable. In this way it wouldn't be limited and can adjust to any matrix no matter 
how complex or its size. I also wanted to give the user the freedom to utilize any grid they desired instead of locking the program to a series of predefined 
matrices.

## How It Works
1. Select Initial Grid
    - The user imports a numeric grid into the program via file I/O. The program intakes the grid and is stored as a multidimensional array.
      <br/><br/>
      ![Tomolor](https://static.wixstatic.com/media/371879_7445c3033a7a4c348dcbfd68694092f5~mv2.png/v1/crop/x_0,y_1,w_249,h_186/fill/w_348,h_260,al_c,lg_1,q_85,enc_auto/uno.png)
      <br/>
 
1. Initial Iteration
    - The preprocessed grid is displayed to the user for reference.
      <br/><br/>
      ![Tomolor](https://static.wixstatic.com/media/371879_145018bc4eac4f3491ff9077d154a6c4~mv2.png/v1/crop/x_0,y_4,w_283,h_212/fill/w_378,h_283,al_c,lg_1,q_85,enc_auto/dos.png)
      <br/>
      
1. Next Iteration
    - The grid is passed through a multi step algorithm that follows Conway's rules and transforms the matrix into the next iteration of the grid.
      This process can be repeated as many times as desired and the grid will keep iterating through it's phases.
      <br/><br/>    
      ![Tomolor](https://static.wixstatic.com/media/371879_4df15055edbb45f7b9ae3a84a6da8e72~mv2.png/v1/crop/x_0,y_112,w_408,h_306/fill/w_378,h_283,al_c,q_85,usm_0.66_1.00_0.01,enc_auto/tres.png)
      <br/>

1. Scalability
   - For program versatility the program is able to adapt and scale to a grid of any size.
     <br/><br/>
     ![Tomolor](https://static.wixstatic.com/media/371879_784832be116245b482e9661d8b7ab01c~mv2.png/v1/crop/x_0,y_0,w_738,h_550/fill/w_378,h_282,al_c,q_85,usm_0.66_1.00_0.01,enc_auto/cuatro.png)
     <br/>

## Challenges I Faced
Creating an adaptable program proved to be a difficult challenge. I had to plan for any possibility that a user was going to throw at the program. 
By utilizing a complex web of conditionals and loop structures I was able to write a program that makes decisions based on what type of grid it encounters.
<br/><br/>

## What I Learned
I learned that to be able to plan ahead by predicting possible outcomes and having a solution for the unexpected. I learned how to implement these ideas into 
computer logic to allow a program not just be a static calculator of that takes input and outputs results, but instead analyzes the data and acts accordingly.
