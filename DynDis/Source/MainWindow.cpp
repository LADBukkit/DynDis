/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 6.0.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2020 - Raw Material Software Limited.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "MainWindow.h"
#include "TabComp.h"
#include "TabComp.h"
#include "TabComp.h"
#include "TabComp.h"
#include "TabComp.h"
#include "TabComp.h"
#include "TabComp.h"
#include "TabComp.h"
#include "TabComp.h"
#include "TabComp.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainWindow::MainWindow ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    juce__toggleButton.reset (new juce::ToggleButton ("symmetricCheckbox"));
    addAndMakeVisible (juce__toggleButton.get());
    juce__toggleButton->setButtonText (TRANS("Symmetric"));
    juce__toggleButton->addListener (this);

    juce__toggleButton->setBounds (16, 16, 150, 24);

    juce__tabbedComponent.reset (new juce::TabbedComponent (juce::TabbedButtonBar::TabsAtTop));
    addAndMakeVisible (juce__tabbedComponent.get());
    juce__tabbedComponent->setTabBarDepth (24);
    juce__tabbedComponent->addTab (TRANS("P1"), juce::Colours::lightgrey, new TabComp(), true);
    juce__tabbedComponent->addTab (TRANS("P2"), juce::Colours::lightgrey, new TabComp(), true);
    juce__tabbedComponent->addTab (TRANS("P3"), juce::Colours::lightgrey, new TabComp(), true);
    juce__tabbedComponent->addTab (TRANS("P4"), juce::Colours::lightgrey, new TabComp(), true);
    juce__tabbedComponent->addTab (TRANS("P5"), juce::Colours::lightgrey, new TabComp(), true);
    juce__tabbedComponent->addTab (TRANS("P-1"), juce::Colours::lightgrey, new TabComp(), true);
    juce__tabbedComponent->addTab (TRANS("P-2"), juce::Colours::lightgrey, new TabComp(), true);
    juce__tabbedComponent->addTab (TRANS("P-3"), juce::Colours::lightgrey, new TabComp(), true);
    juce__tabbedComponent->addTab (TRANS("P-4"), juce::Colours::lightgrey, new TabComp(), true);
    juce__tabbedComponent->addTab (TRANS("P-5"), juce::Colours::lightgrey, new TabComp(), true);
    juce__tabbedComponent->setCurrentTabIndex (0);

    juce__tabbedComponent->setBounds (368, 24, 368, 264);

    internalPath1.startNewSubPath (190.0f, 40.0f);
    internalPath1.lineTo (340.0f, 288.0f);
    internalPath1.lineTo (44.0f, 288.0f);
    internalPath1.closeSubPath();


    //[UserPreSize]
    //[/UserPreSize]

    setSize (750, 300);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MainWindow::~MainWindow()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    juce__toggleButton = nullptr;
    juce__tabbedComponent = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainWindow::paint (juce::Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (juce::Colour (0xff2b2a2d));

    {
        float x = 0, y = 0;
        juce::Colour fillColour = juce::Colour (0xff25bdce);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillPath (internalPath1, juce::AffineTransform::translation(x, y));
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainWindow::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MainWindow::buttonClicked (juce::Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == juce__toggleButton.get())
    {
        //[UserButtonCode_juce__toggleButton] -- add your button handler code here..
        //[/UserButtonCode_juce__toggleButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainWindow" componentName=""
                 parentClasses="public juce::Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="750" initialHeight="300">
  <BACKGROUND backgroundColour="ff2b2a2d">
    <PATH pos="0 0 100 100" fill="solid: ff25bdce" hasStroke="0" nonZeroWinding="1">s 190.26 40 l 340 288 l 44 288 x</PATH>
  </BACKGROUND>
  <TOGGLEBUTTON name="symmetricCheckbox" id="443295e611b4245f" memberName="juce__toggleButton"
                virtualName="" explicitFocusOrder="0" pos="16 16 150 24" buttonText="Symmetric"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TABBEDCOMPONENT name="tabField" id="d8d34839f71c59d" memberName="juce__tabbedComponent"
                   virtualName="" explicitFocusOrder="0" pos="368 24 368 264" orientation="top"
                   tabBarDepth="24" initialTab="0">
    <TAB name="P1" colour="ffd3d3d3" useJucerComp="1" contentClassName="TabComp"
         constructorParams="" jucerComponentFile="TabComp.cpp"/>
    <TAB name="P2" colour="ffd3d3d3" useJucerComp="1" contentClassName="TabComp"
         constructorParams="" jucerComponentFile="TabComp.cpp"/>
    <TAB name="P3" colour="ffd3d3d3" useJucerComp="1" contentClassName="TabComp"
         constructorParams="" jucerComponentFile="TabComp.cpp"/>
    <TAB name="P4" colour="ffd3d3d3" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="TabComp.cpp"/>
    <TAB name="P5" colour="ffd3d3d3" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="TabComp.cpp"/>
    <TAB name="P-1" colour="ffd3d3d3" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="TabComp.cpp"/>
    <TAB name="P-2" colour="ffd3d3d3" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="TabComp.cpp"/>
    <TAB name="P-3" colour="ffd3d3d3" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="TabComp.cpp"/>
    <TAB name="P-4" colour="ffd3d3d3" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="TabComp.cpp"/>
    <TAB name="P-5" colour="ffd3d3d3" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="TabComp.cpp"/>
  </TABBEDCOMPONENT>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

