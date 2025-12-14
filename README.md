# Liskov Substitution Principle (LSP) in C++

Цей проект демонструє принцип підстановки Лісков (LSP):

- Об'єкти підкласів повинні бути взаємозамінними з об'єктами базових класів.
- Порушення LSP: клас Penguin успадковує Bird, але не може літати.
- Правильна реалізація: розділення на FlyingBird та NonFlyingBird.

##  Запуск
```bash
g++ main.cpp -o birds
./birds
