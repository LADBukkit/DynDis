/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
DynDisAudioProcessorEditor::DynDisAudioProcessorEditor (DynDisAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    
    setSize (750, 300);

    addAndMakeVisible(mainWindow);
}

DynDisAudioProcessorEditor::~DynDisAudioProcessorEditor()
{
}

//==============================================================================
void DynDisAudioProcessorEditor::paint (juce::Graphics& g)
{

}

void DynDisAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    mainWindow.setBounds(getLocalBounds());
}
