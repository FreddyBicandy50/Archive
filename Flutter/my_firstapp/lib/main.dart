import 'package:flutter/material.dart';
import 'package:my_firstapp/widgets/card_item.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
        title: "Application Title",
        theme: ThemeData(
            colorScheme: ColorScheme.fromSeed(seedColor: Colors.white10),
            useMaterial3: true),
        home: const MyHomePage(title: "Home"));
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({super.key, required this.title});

  // used by the build method of the State. Fields in a Widget subclass are
  // always marked "final".

  final String title;

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  int _bananas = 0;

  void _increase() {
    setState(() {
      _bananas++;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          backgroundColor: Theme.of(context).colorScheme.inversePrimary,
          title: Text(widget.title),
        ),
        body: const SafeArea(
          child: Row(
            children: [
              CardItem(
                imageUrl: 'https://via.placeholder.com/100',
                itemName: 'Item 1',
                itemPrice: '\$29.99',
              ),
              CardItem(
                imageUrl: 'https://via.placeholder.com/100',
                itemName: 'Item 1',
                itemPrice: '\$29.99',
              ),
              CardItem(
                imageUrl: 'https://via.placeholder.com/100',
                itemName: 'Item 1',
                itemPrice: '\$29.99',
              ),
            ],
          ),
        ),
        floatingActionButton: FloatingActionButton(
          onPressed: _increase,
          tooltip: "get banana",
          child: const Icon(Icons.add_a_photo),
        ));
  }
}
