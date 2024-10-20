import 'question.dart';

class QuestionBank {
  int totalScore = 0;
  List<bool> _answers = [];
  final List<Question> _questions = [
    Question('Jesus has gave us the word of eternal life to follow him and die',
        false),
    Question(
        'When someone has face "Redemption" he often will lose it soon', false),
    Question(
        'A man can\'t runaway or control his lust unless he is constantly practicing salvation by prayers and hymns',
        true),
    Question(
        'The way of a true Redemption is often come\'s with turbulence and trials to make the person weaker and to see if he quits',
        true),
    Question('The Redemption of a man is often fated', true),
    Question('Some cats are actually allergic to humans', true),
    Question('You can lead a cow down stairs but not up stairs.', false),
    Question('Approximately one quarter of human bones are in the feet.', true),
    Question('A slug\'s blood is green.', true),
    Question('Buzz Aldrin\'s mother\'s maiden name was \"Moon\".', true),
    Question('It is illegal to pee in the Ocean in Portugal.', true),
    Question(
        'No piece of square dry paper can be folded in half more than 7 times.',
        false),
    Question(
        'In London, UK, if you happen to die in the House of Parliament, you are technically entitled to a state funeral, because the building is considered too sacred a place.',
        true),
    Question(
        'The loudest sound produced by any animal is 188 decibels. That animal is the African Elephant.',
        false),
    Question(
        'The total surface area of two human lungs is approximately 70 square metres.',
        true),
    Question('Google was originally called \"Backrub\".', true),
    Question(
        'Chocolate affects a dog\'s heart and nervous system; a few ounces are enough to kill a small dog.',
        true),
    Question(
        'In West Virginia, USA, if you accidentally hit an animal with your car, you are free to take it home to eat.',
        true),
  ];

  void reset() {
    _answers = [];
    totalScore = 0;
  }

  int length() => _questions.length;
  void answers(bool a) => _answers.add(a);
  String displayText(int index) => _questions[index].questionText;
  int getResults() {
    int i = 0;
    while (i < _questions.length) {
      if (_answers[i] == _questions[i].questionAnswer) {
        totalScore++;
      }
      i++;
    }
    return totalScore;
  }
}
