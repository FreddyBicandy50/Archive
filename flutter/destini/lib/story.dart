import 'storyline.dart';

class Story {
  Storyline currentStory = Storyline('', '', '');
  Storyline _story0 = Storyline(
    "Your car has blown a tire on a winding road in the middle of nowhere with no cell phone reception. You decide to hitchhike. A rusty pickup truck rumbles to a stop next to you. A man with a wide brimmed hat and soulless eyes opens the passenger door for you and says: \"Need a ride, boy?\"",
    "I'll hop in. Thanks for the help!",
    "Well, I don't have many options. Better ask him if he's a murderer",
  );
  Storyline _story1 = Storyline(
    "He nods slowly, unphased by the question",
    "At least he's honest. I'll climb in.",
    "Wait, I know how to change a tire.",
  );
  Storyline _story2 = Storyline(
    "As you begin to drive, the stranger starts talking about his relationship with his mother. He gets angrier andangrier by the minute. He asks you to open the glove box. Inside you find a bloody knife, two severed fingers, anda cassette tape of Elton John. He reaches for the glove box.",
    "I love Elton John! Hand him the cassette tape.",
    "It’s him or me. Take the knife and stab him.",
  );
  Storyline _story3 = Storyline(
    "What? Such a cop out! Did you know accidental traffic accidents are the second leading cause of accidental death for most adult age groups?",
    "Restart",
    "",
  );
  Storyline _story4 = Storyline(
    "As you smash through the guardrail and careen towards the jagged rocks below you reflect on the dubious wisdom of stabbing someone while they are driving a car you are in.",
    "Restart",
    "",
  );
  Storyline _story5 = Storyline(
    "You bond with the murderer while crooning verses of \"Can you feel the love tonight\". He drops you off at the next town. Before you go he asks you if you know any good places to dump bodies. You reply:\"Try the pier.\"",
    "Restart",
    "",
  );

  void makeStory() {
    _story0.add(_story2, _story1);
    _story1.add(_story2, _story3);
    _story2.add(_story5, _story4);
    currentStory = _story0;
  }

  String textStory() => currentStory.text;
  String choice1textStory() => currentStory.choice1;
  String choice2textStory() => currentStory.choice2;
  void nextStory(bool getOption) => getOption
      ? currentStory = currentStory.choice1Next!
      : currentStory = currentStory.choice2Next!;
  void resetStory() => currentStory = _story0;
}
