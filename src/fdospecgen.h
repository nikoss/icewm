// WARNING: this is an autogenerated file. Any change might be overwritten!
LPCSTR ANY[] = { "", "|", NULL };
LPCSTR AudioVideo[] = { "AudioVideo", "|", NULL };
LPCSTR AudioVideoAudio[] = { "AudioVideo", "Audio", "|", NULL };
LPCSTR AudioVideoVideo[] = { "AudioVideo", "Video", "|", NULL };
LPCSTR AudioVideoorEducation[] = { "AudioVideo", "|", "Education", "|", NULL };
LPCSTR AudioorVideoorAudioVideo[] = { "Audio", "|", "Video", "|", "AudioVideo", "|", NULL };
LPCSTR Development[] = { "Development", "|", NULL };
LPCSTR EducationComputerScienceorScienceComputerScience[] = { "Education", "ComputerScience", "|", "Science", "ComputerScience", "|", NULL };
LPCSTR EducationMathorScienceMath[] = { "Education", "Math", "|", "Science", "Math", "|", NULL };
LPCSTR EducationorScience[] = { "Education", "|", "Science", "|", NULL };
LPCSTR EducationorScienceorUtility[] = { "Education", "|", "Science", "|", "Utility", "|", NULL };
LPCSTR Game[] = { "Game", "|", NULL };
LPCSTR Graphics[] = { "Graphics", "|", NULL };
LPCSTR Graphics2DGraphics[] = { "Graphics", "2DGraphics", "|", NULL };
LPCSTR GraphicsScanning[] = { "Graphics", "Scanning", "|", NULL };
LPCSTR GraphicsorOffice[] = { "Graphics", "|", "Office", "|", NULL };
LPCSTR Network[] = { "Network", "|", NULL };
LPCSTR NetworkorAudio[] = { "Network", "|", "Audio", "|", NULL };
LPCSTR NetworkorDevelopment[] = { "Network", "|", "Development", "|", NULL };
LPCSTR Office[] = { "Office", "|", NULL };
LPCSTR OfficeorDevelopment[] = { "Office", "|", "Development", "|", NULL };
LPCSTR OfficeorDevelopmentorAudioVideo[] = { "Office", "|", "Development", "|", "AudioVideo", "|", NULL };
LPCSTR OfficeorNetwork[] = { "Office", "|", "Network", "|", NULL };
LPCSTR OfficeorTextTools[] = { "Office", "|", "TextTools", "|", NULL };
LPCSTR Settings[] = { "Settings", "|", NULL };
LPCSTR SettingsHardwareSettings[] = { "Settings", "HardwareSettings", "|", NULL };
LPCSTR SettingsorSystem[] = { "Settings", "|", "System", "|", NULL };
LPCSTR SettingsorUtility[] = { "Settings", "|", "Utility", "|", NULL };
LPCSTR System[] = { "System", "|", NULL };
LPCSTR SystemFileTools[] = { "System", "FileTools", "|", NULL };
LPCSTR SystemorGame[] = { "System", "|", "Game", "|", NULL };
LPCSTR SystemorNetwork[] = { "System", "|", "Network", "|", NULL };
LPCSTR Utility[] = { "Utility", "|", NULL };
LPCSTR UtilityArchiving[] = { "Utility", "Archiving", "|", NULL };
LPCSTR UtilityorSystem[] = { "Utility", "|", "System", "|", NULL };

namespace spec {

tListMeta menuinfo[] =
{
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics
    { N_("2DGraphics"), "2DGraphics", "folder", (char**) &Graphics},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics
    { N_("3DGraphics"), "3DGraphics", "folder", (char**) &Graphics},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings or Utility
    { N_("Accessibility"), "Accessibility", "folder", (char**) &SettingsorUtility},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings or Utility
    { N_("Accessibility"), "Accessibility", "folder", (char**) &SettingsorUtility},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Accessories"), "Accessories", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("ActionGame"), "ActionGame", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Adult"), "Adult", "folder", (char**) &ANY},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("AdventureGame"), "AdventureGame", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Amusement"), "Amusement", "folder", (char**) &ANY},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("ArcadeGame"), "ArcadeGame", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("Archiving"), "Archiving", "folder", (char**) &Utility},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Art"), "Art", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("ArtificialIntelligence"), "ArtificialIntelligence", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Astronomy"), "Astronomy", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Audio"), "Audio", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("AudioVideo"), "AudioVideo", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Audio or Video or AudioVideo
    { N_("AudioVideoEditing"), "AudioVideoEditing", "folder", (char**) &AudioorVideoorAudioVideo},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Biology"), "Biology", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("BlocksGame"), "BlocksGame", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("BoardGame"), "BoardGame", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("Building"), "Building", "folder", (char**) &Development},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("Calculator"), "Calculator", "folder", (char**) &Utility},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("Calendar"), "Calendar", "folder", (char**) &Office},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("CardGame"), "CardGame", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("Chart"), "Chart", "folder", (char**) &Office},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("Chat"), "Chat", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Chemistry"), "Chemistry", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("Clock"), "Clock", "folder", (char**) &Utility},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility;Archiving
    { N_("Compression"), "Compression", "folder", (char**) &UtilityArchiving},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("ComputerScience"), "ComputerScience", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Construction"), "Construction", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("ContactManagement"), "ContactManagement", "folder", (char**) &Office},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Core"), "Core", "folder", (char**) &ANY},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("DataVisualization"), "DataVisualization", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office or Development or AudioVideo
    { N_("Database"), "Database", "folder", (char**) &OfficeorDevelopmentorAudioVideo},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("Debugger"), "Debugger", "folder", (char**) &Development},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings
    { N_("DesktopSettings"), "DesktopSettings", "folder", (char**) &Settings},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Development"), "Development", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("Dialup"), "Dialup", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office or TextTools
    { N_("Dictionary"), "Dictionary", "folder", (char**) &OfficeorTextTools},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo
    { N_("DiscBurning"), "DiscBurning", "folder", (char**) &AudioVideo},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Documentation"), "Documentation", "folder", (char**) &ANY},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Economy"), "Economy", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Editors"), "Editors", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Education"), "Education", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Electricity"), "Electricity", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Electronics"), "Electronics", "folder", (char**) &ANY},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office or Network
    { N_("Email"), "Email", "folder", (char**) &OfficeorNetwork},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: System or Game
    { N_("Emulator"), "Emulator", "folder", (char**) &SystemorGame},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Engineering"), "Engineering", "folder", (char**) &ANY},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("Feed"), "Feed", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: System;FileTools
    { N_("FileManager"), "FileManager", "folder", (char**) &SystemFileTools},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility or System
    { N_("FileTools"), "FileTools", "folder", (char**) &UtilityorSystem},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("FileTransfer"), "FileTransfer", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: System
    { N_("Filesystem"), "Filesystem", "folder", (char**) &System},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("Finance"), "Finance", "folder", (char**) &Office},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("FlowChart"), "FlowChart", "folder", (char**) &Office},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("GUIDesigner"), "GUIDesigner", "folder", (char**) &Development},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Game"), "Game", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Geography"), "Geography", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Geology"), "Geology", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Geoscience"), "Geoscience", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Graphics"), "Graphics", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network or Audio
    { N_("HamRadio"), "HamRadio", "folder", (char**) &NetworkorAudio},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings
    { N_("HardwareSettings"), "HardwareSettings", "folder", (char**) &Settings},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("History"), "History", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Humanities"), "Humanities", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("IDE"), "IDE", "folder", (char**) &Development},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("IRCClient"), "IRCClient", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("ImageProcessing"), "ImageProcessing", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("InstantMessaging"), "InstantMessaging", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("KidsGame"), "KidsGame", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Languages"), "Languages", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Literature"), "Literature", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("LogicGame"), "LogicGame", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science or Utility
    { N_("Maps"), "Maps", "folder", (char**) &EducationorScienceorUtility},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Math"), "Math", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("MedicalSoftware"), "MedicalSoftware", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo;Audio
    { N_("Midi"), "Midi", "folder", (char**) &AudioVideoAudio},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo;Audio
    { N_("Mixer"), "Mixer", "folder", (char**) &AudioVideoAudio},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: System or Network
    { N_("Monitor"), "Monitor", "folder", (char**) &SystemorNetwork},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Motif"), "Motif", "folder", (char**) &ANY},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Multimedia"), "Multimedia", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo or Education
    { N_("Music"), "Music", "folder", (char**) &AudioVideoorEducation},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Network"), "Network", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("News"), "News", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education;Math or Science;Math
    { N_("NumericalAnalysis"), "NumericalAnalysis", "folder", (char**) &EducationMathorScienceMath},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics;Scanning
    { N_("OCR"), "OCR", "folder", (char**) &GraphicsScanning},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Office"), "Office", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Other"), "Other", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("P2P"), "P2P", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("PDA"), "PDA", "folder", (char**) &Office},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings
    { N_("PackageManager"), "PackageManager", "folder", (char**) &Settings},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education;ComputerScience or Science;ComputerScience
    { N_("ParallelComputing"), "ParallelComputing", "folder", (char**) &EducationComputerScienceorScienceComputerScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics or Office
    { N_("Photography"), "Photography", "folder", (char**) &GraphicsorOffice},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Physics"), "Physics", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Audio or Video or AudioVideo
    { N_("Player"), "Player", "folder", (char**) &AudioorVideoorAudioVideo},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("Presentation"), "Presentation", "folder", (char**) &Office},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings;HardwareSettings
    { N_("Printing"), "Printing", "folder", (char**) &SettingsHardwareSettings},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("Profiling"), "Profiling", "folder", (char**) &Development},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office or Development
    { N_("ProjectManagement"), "ProjectManagement", "folder", (char**) &OfficeorDevelopment},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics or Office
    { N_("Publishing"), "Publishing", "folder", (char**) &GraphicsorOffice},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics;2DGraphics
    { N_("RasterGraphics"), "RasterGraphics", "folder", (char**) &Graphics2DGraphics},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Audio or Video or AudioVideo
    { N_("Recorder"), "Recorder", "folder", (char**) &AudioorVideoorAudioVideo},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("RemoteAccess"), "RemoteAccess", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("RevisionControl"), "RevisionControl", "folder", (char**) &Development},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Robotics"), "Robotics", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("RolePlaying"), "RolePlaying", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics
    { N_("Scanning"), "Scanning", "folder", (char**) &Graphics},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Science"), "Science", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Screensavers"), "Screensavers", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Settings or System
    { N_("Security"), "Security", "folder", (char**) &SettingsorSystem},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo;Audio
    { N_("Sequencer"), "Sequencer", "folder", (char**) &AudioVideoAudio},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Settings"), "Settings", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("Shooter"), "Shooter", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("Simulation"), "Simulation", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science or Utility
    { N_("Spirituality"), "Spirituality", "folder", (char**) &EducationorScienceorUtility},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Education or Science
    { N_("Sports"), "Sports", "folder", (char**) &EducationorScience},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("SportsGame"), "SportsGame", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("Spreadsheet"), "Spreadsheet", "folder", (char**) &Office},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Game
    { N_("StrategyGame"), "StrategyGame", "folder", (char**) &Game},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("System"), "System", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo;Video
    { N_("TV"), "TV", "folder", (char**) &AudioVideoVideo},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("Telephony"), "Telephony", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("TelephonyTools"), "TelephonyTools", "folder", (char**) &Utility},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: System
    { N_("TerminalEmulator"), "TerminalEmulator", "folder", (char**) &System},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("TextEditor"), "TextEditor", "folder", (char**) &Utility},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Utility
    { N_("TextTools"), "TextTools", "folder", (char**) &Utility},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Development
    { N_("Translation"), "Translation", "folder", (char**) &Development},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: AudioVideo;Audio
    { N_("Tuner"), "Tuner", "folder", (char**) &AudioVideoAudio},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Utility"), "Utility", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics;2DGraphics
    { N_("VectorGraphics"), "VectorGraphics", "folder", (char**) &Graphics2DGraphics},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("Video"), "Video", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("VideoConference"), "VideoConference", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Graphics or Office
    { N_("Viewer"), "Viewer", "folder", (char**) &GraphicsorOffice},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes.
    { N_("WINE"), "WINE", "folder", NULL},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network
    { N_("WebBrowser"), "WebBrowser", "folder", (char**) &Network},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Network or Development
    { N_("WebDevelopment"), "WebDevelopment", "folder", (char**) &NetworkorDevelopment},
// TRANSLATORS: This is a menu category name from freedesktop.org. Please add spaces as needed but no double-quotes. Context: Office
    { N_("WordProcessor"), "WordProcessor", "folder", (char**) &Office}
};
}
