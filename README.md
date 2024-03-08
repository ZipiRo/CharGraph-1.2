# CharGraph++
Dynamic Character Graphics Engine for C++

---

### Table of Contents

- [Description](#description)
- [How To Use](#how-to-use)
- [License](#license)
- [Author Info](#author-info)
  
---

## Description

Embark on a creative journey into the realm of character-based graphics with CharGraph++, a powerful C++ library designed to bring your imagination to life on the console screen. 
With CharGraph++, you can effortlessly create captivating shapes, render text, and develop interactive applications, including simple games.

#### Key Features

1. Shape Drawing: Craft intricate designs and geometric patterns with ease using the library's intuitive shape-drawing capabilities.
   From basic squares to complex polygons, CharGraph++ empowers you to unleash your artistic side within the console environment.

2. Text Rendering: Add a dynamic element to your applications by seamlessly rendering text on the console screen.
   Whether you're building a text-based adventure or a user interface for your game, CharGraph++ provides flexible text-handling functions for a polished appearance.

3. Keyboard Input Integration: Take control of user interactions with built-in keyboard input support.
   Design interactive games that respond to user commands, creating a more engaging and immersive experience for your audience.

4. User-Friendly API: CharGraph++ boasts an easy-to-use API, allowing developers to quickly grasp and implement its functionalities.
   The library is well-documented, providing clear guidelines for both beginners and experienced programmers.

5. Versatility: From crafting ASCII art to developing lightweight games, CharGraph++ is a versatile tool that adapts to various creative projects.
   Experiment with different ideas and watch as your concepts come to life on the console canvas.

#### Usage Examples

1. Build classic games like Pong, Snake, or Tetris with the library's shape-drawing capabilities and keyboard input support.

2. Create dynamic menus and user interfaces for console-based applications.

3. Develop educational programs that utilize graphical elements to enhance the learning experience.

[Back To The Top](#chargraph)

---

## How To Use

#### Installation

 Open a terminal and clone the CharGraph++ repository from GitHub using the following command:
 ```bash
 git clone https://github.com/yourusername/c_engine.git
 ```

#### Compile:

To compile there is a make.bat or you can use this following command:

```bash
g++ code dir\CharGraph++.a -o name
```

>dir - the path to the directory where the source code is (headers and library)

>code - the code you want to compile

>name - the final name of the program

#### API Reference

  The CharGraph++ will have an API in the future, until then this is a basic runtime:

  ```cpp
  #include "CharGraph++.h"

  Scene scene(100, 30, ' ');
  Input input;

  int main(){
    bool running = true;
    while(running){
      input.event();
      if(input.keyPressed(27))
        running = false;
    }

    return 0;
  }
  ```
  
[Back To The Top](#chargraph)

---

## License
UNLICENSE license

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <https://unlicense.org>

[Back To The Top](#chargraph)

---

## Author Info

- Twitch - [ZipiR0](https://www.twitch.tv/zipir0)
- YouTube - [ZipiRo](https://youtube.com/@zipiro8942?si=gEqfBdBMRNxJvyBs)
- Website - [CtrlSky](https://ctrlsky.org/)

[Back To The Top](#chargraph)
