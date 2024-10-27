class Storyline<String> {
  String text;
  String choice1;
  String choice2;
  Storyline<String>? choice1Next;
  Storyline<String>? choice2Next;

  Storyline(this.text, this.choice1, this.choice2);

  void add(getChoice1Next, getChoice2Next) {
    choice1Next = getChoice1Next;
    choice2Next = getChoice2Next;
  }
}
