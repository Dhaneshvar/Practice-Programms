# Flutter
https://docs.flutter.dev/development/tools/android-studio#sidenav-1

1. Install vistual Studio Code and emulators.
2. Install Flutter SDK (https://docs.flutter.dev/get-started/install/windows)
3. Open cmd as Administrator and run 
    > flutter doctor
4. In Android Studio Code, File -> Settings  -> plugin -> install __flutter__ , __Dart__.
5. open android studio, create new flutter project.
6. For Setting __Hot Reload__.
In Android Studio Code, File -> Settings
-> Flutter
    1. Check the Perform hot reload on save.
    2. Check the box of Format code on save.

# Programm

1. Stateless widget
    * Don't change, remain unchanged
    * To create statless widget we have to override the build() method.
    * Eg. text, Raised Button, Icon.
2. Clear all the code. and type import and type material auto suggestion will come
3. type void run(){ runApp(name of App)}
4. then type __stless__ it will create stateless widget. Name the class __MyApp__ give the same name inside the runApp(__MyApp()__). In the return type MaterialApp(home:text("dhanesh"),);
5. ## Statefull Widget
    1. change its properties during run time are statefull widgets.
    2.Eg. CheckBox, RadioButton
    3. First step, create a class that extends from statefulwidget class it should return createState() method.
    4.To create we have to override createState() which return the state of the widget.
    5. we should create a State class along with properties of the widget that might change.
    6. The __state class__ should implement the build() and setState() methods to manage the state of the widget

6. ## SafeArea
It used for text not to overlap with the Top of Scrren. 
So Hover mouse on top of __text__ widget, bulb like icon appear click wrap with widget and name is as __SafeArea__

7. ## Custom Live Template
write some code if we type some short cut it opens the entire code to do this
File -> Setting -> Editor -> Live Template -> Select Flutter -> Create Abbrevation name(bar&body ) and Description ->  In TemplateText, Paste the code ->In  Define, Select Dart, -> Apply -> OK 

8. # Scaffold Widget
1. AppBar - On the Top
2. Body 
3. floatingActionButton
4. drawer - 3 equl type on left side
5. endDrawer - on Right side
6. persistentFooterButtons - fixed button on footer
7. bottoNavigaionBar  