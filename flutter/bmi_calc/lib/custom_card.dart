import 'package:flutter/material.dart';

Container customCard({getColor, required List<Widget> getWidgets}) {
  return Container(
    width: 190,
    height: 200,
    margin: const EdgeInsets.symmetric(horizontal: 10, vertical: 15),
    child: Card(
      color:  Color(getColor),
      shape: RoundedRectangleBorder(borderRadius: BorderRadius.circular(10.0)),
      child: Padding(
        padding: const EdgeInsets.all(20.0),
        child: Expanded(
          child: Column(
            children:  getWidgets,
          ),
        ),
      ),
    ),
  );
}

