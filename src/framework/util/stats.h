#ifndef STATS_H
#define STATS_H

class Stats {
    public : 
        void types();
        void get();
        void clear();
        void clearAll();
        void getSlow();
        void clearSlow();
        void getSleepTime();
        void resetSleepTime();
        void getWidgetsInfo();

        void addCreature();
        void removeCreature();
        void addThing();
        void removeThing();
        void addWidget(const UIWidgetPtr& child);
        void removeWidget(const UIWidgetPtr& child);
        void addTexture();
        void removeTexture();
}

extern Stats g_stats;

#endif