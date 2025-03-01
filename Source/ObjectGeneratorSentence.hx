/*This is a global object.*/
import CollectionEnum;
import CollectionStruct;
class ObjectGeneratorSentence{

    private var collectionGlobalObject:CollectionGlobal = null;
    private var visitorObject:ObjectVisitor = null;

    public function new(_collectionGlobalObject:CollectionGlobal, _visitorObject:ObjectVisitor){
        collectionGlobalObject = _collectionGlobalObject;
        visitorObject = _visitorObject;
    }





    private function AddWordString(
        _tagTypeEnum                :EnumTagType,
        _tagTypeSubEnum             :EnumTagTypeSub
    ){
        var getNegativeBool         :Bool = false;
        var getNeutralBool          :Bool = false;
        var getPositiveBool         :Bool = false;

        if(
            visitorObject.GetVisitCorrectExhibitionBool() == true &&
            visitorObject.GetScoreInt() >= 0
        ){

            getNegativeBool     = false;
            getNeutralBool      = true;
            getPositiveBool     = true;

        }
        else if(
            visitorObject.GetVisitCorrectExhibitionBool() == false ||
            visitorObject.GetScoreInt() < 0
        ){

            getNegativeBool     = true;
            getNeutralBool      = true;
            getPositiveBool     = false;

        }
        else{

            getNegativeBool     = true;
            getNeutralBool      = true;
            getPositiveBool     = true;

        }

        var isGeneralBool           :Bool               = false;
        var loopCounterPrivate1Int  :Int                = 0;
        var randomIndexInt          :Int                = -1;
        var tagStringArray          :Array<String>      = new Array<String>();

        /*First we need to search over the private tag collection (tag object within the visitor object).*/
        while(loopCounterPrivate1Int < visitorObject.GetTagObjectArray().length){

            if(visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetTypeEnum() == _tagTypeEnum){

                /*The Reflect.callMethod() is a function to call a function within an object.
                Withi this Reflect.callMethod() I can call a specific function from an object,
                    wihtout writting so many if statements.*/
                if(
                    visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == NEGATIVE &&
                    getNegativeBool == true
                ){

                    tagStringArray.push(
                        Reflect.callMethod(visitorObject.GetTagObjectArray()[loopCounterPrivate1Int],
                        DetermineProperCallbackFunction(
                            _tagTypeSubEnum,
                            visitorObject.GetTagObjectArray()[loopCounterPrivate1Int]),
                            new Array<Dynamic>()
                        )
                    );

                }
                if(
                    visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == NEUTRAL &&
                    getNeutralBool == true
                ){

                    tagStringArray.push(
                        Reflect.callMethod(visitorObject.GetTagObjectArray()[loopCounterPrivate1Int],
                        DetermineProperCallbackFunction(
                            _tagTypeSubEnum,
                            visitorObject.GetTagObjectArray()[loopCounterPrivate1Int]),
                            new Array<Dynamic>()
                        )
                    );

                }
                if(
                    visitorObject.GetTagObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == POSITIVE &&
                    getPositiveBool == true
                ){

                    tagStringArray.push(
                        Reflect.callMethod(visitorObject.GetTagObjectArray()[loopCounterPrivate1Int],
                        DetermineProperCallbackFunction(
                            _tagTypeSubEnum,
                            visitorObject.GetTagObjectArray()[loopCounterPrivate1Int]),
                            new Array<Dynamic>()
                        )
                    );

                }

            }

            loopCounterPrivate1Int ++;

        }

        /*If the while loop returns zero element being added to the string array then get the tag from general tag library.*/
        if(tagStringArray.length == 0){

            isGeneralBool = true;
            loopCounterPrivate1Int = 0;

            while(loopCounterPrivate1Int < collectionGlobalObject.GetTagGeneralObjectArray().length){

                if(collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetTypeEnum() == _tagTypeEnum){

                    if(
                        collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == NEGATIVE &&
                        getNegativeBool == true
                    ){

                        tagStringArray.push(
                            Reflect.callMethod(collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int],
                            DetermineProperCallbackFunction(
                                _tagTypeSubEnum,
                                collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int]),
                                new Array<Dynamic>()
                            )
                        );

                    }
                    if(
                        collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == NEUTRAL &&
                        getNeutralBool == true
                    ){

                        tagStringArray.push(
                            Reflect.callMethod(collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int],
                            DetermineProperCallbackFunction(
                                _tagTypeSubEnum,
                                collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int]),
                                new Array<Dynamic>()
                            )
                        );

                    }
                    if(
                        collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int].GetFeelEnum() == POSITIVE &&
                        getPositiveBool == true
                    ){

                        tagStringArray.push(
                            Reflect.callMethod(collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int],
                            DetermineProperCallbackFunction(
                                _tagTypeSubEnum,
                                collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterPrivate1Int]),
                                new Array<Dynamic>()
                            )
                        );

                    }

                }

                loopCounterPrivate1Int ++;

            }

        }
        randomIndexInt = RandomNumberGeneratorInt(tagStringArray.length);
        var returnString:String = tagStringArray[randomIndexInt];
        var tagObject:ObjectTag = CollectionFunction.FindTagObject(collectionGlobalObject, isGeneralBool, returnString);

        if(
            _tagTypeEnum != ADJ &&
            _tagTypeEnum != ADV &&
            _tagTypeEnum != VERB_INTRANSITIVE &&
            _tagTypeEnum != VERB_TRANSITIVE
        ){

            if(tagObject != null){

                if(tagObject.GetCompanyWordStructArray().length > 0){

                    var companyWordStruct:StructCompanyWord = tagObject.GetCompanyWordStructArray()[Math.floor(Math.random()*tagObject.GetCompanyWordStructArray().length)];
                    var companyWordStringArray:Array<String> = companyWordStruct.stringString.split(" ");
                    var companyWordString:String = "";
                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < companyWordStringArray.length){

                        companyWordStringArray[loopCounter1Int] =
                            companyWordStringArray[loopCounter1Int].substring(0, 1).toUpperCase() +
                            companyWordStringArray[loopCounter1Int].substring(1, companyWordStringArray[loopCounter1Int].length).toLowerCase();
                        if(loopCounter1Int == 0){ companyWordString = companyWordString + companyWordStringArray[loopCounter1Int]; }
                        else{ companyWordString = companyWordString + " " + companyWordStringArray[loopCounter1Int]; }

                        loopCounter1Int ++;

                    }

                    if(companyWordStruct.companyWordPositionEnum == PRE){ returnString = companyWordString + " " + returnString; }
                    else if(companyWordStruct.companyWordPositionEnum == SUF){ returnString = returnString + " " + companyWordString; }

                }

            }

        }
        return returnString;

    }





    private function DetermineProperCallbackFunction(_tagTypeSubEnum:EnumTagTypeSub, _tagObject:ObjectTag){
        if(_tagTypeSubEnum == ADJ){ return _tagObject.GetAdjectiveString; }
        else if(_tagTypeSubEnum == ADV){ return _tagObject.GetAdverbString; }
        else if(_tagTypeSubEnum == NOUN){ return _tagObject.GetNounString; }
        else if(_tagTypeSubEnum == NOUN_POS){ return _tagObject.GetNounPosString; }
        else if(_tagTypeSubEnum == NOUN_S){ return _tagObject.GetNounSString; }
        else if(_tagTypeSubEnum == NOUN_S_POS){ return _tagObject.GetNounSPosString; }
        else if(_tagTypeSubEnum == VERB_1){ return _tagObject.GetVerb1String; }
        else if(_tagTypeSubEnum == VERB_2){ return _tagObject.GetVerb2String; }
        else if(_tagTypeSubEnum == VERB_3){ return _tagObject.GetVerb3String; }
        else if(_tagTypeSubEnum == VERB_ING){ return _tagObject.GetVerbIngString; }
        else if(_tagTypeSubEnum == VERB_S){ return _tagObject.GetVerbSString; }
        return null;
    }
    private function GenerateSentenceString(_patternString:String){
        var loopCounter1Int:Int = 0;
        var patternString:String = _patternString;
        var sentenceString:String = "";
        while(loopCounter1Int < patternString.length){
            var codeString:String = "";
            var codeStringArray:Array<String> = ["1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "A", "B", "C", "D", "E", "F"];
            var scan1String:String = patternString.substring(loopCounter1Int, loopCounter1Int + 1);
            if(codeStringArray.indexOf(scan1String) > -1){
                var scan2String:String = patternString.substring(loopCounter1Int + 1, loopCounter1Int + 2);
                if(codeStringArray.indexOf(scan2String) > -1){
                    codeString = scan1String + scan2String;
                    loopCounter1Int += 2;
                }
                else{ loopCounter1Int ++; }
            }
            else{ loopCounter1Int ++; }
            var wordString:String = "";

            /*
            ADJ 1
            ADV 2
            NOUN_ALIVE_ABSTRACT 3
            NOUN_ALIVE_CONCRETE 4
            NOUN_INANIMATE_HOLD_ABSTRACT 5
            NOUN_INANIMATE_HOLD_CONCRETE 6
            NOUN_INANIMATE_PLACE_ABSTRACT 7
            NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER 8
            NOUN_INANIMATE_PLACE_CONCRETE_OWNER 9
            NOUN_INANIMATE_SEE_ABSTRACT 0
            NOUN_INANIMATE_SEE_CONCRETE A
            NOUN_INANIMATE_TITLE B
            NOUN_INANIMATE_WEAR_ABSTRACT C
            NOUN_INANIMATE_WEAR_CONCRETE D
            VERB_INTRANSITIVE E
            VERB_TRANSITIVE F

            ADJ 1
            ADV 2
            NOUN 3
            NOUN_POS 4
            NOUN_S 5
            NOUN_S_POS 6
            VERB_1 7
            VERB_2 8
            VERB_3 9
            VERB_ING 0
            VERB_S A
            */

            if(codeString == "11"){
                wordString = AddWordString(ADJ, ADJ);
            }
            else if(codeString == "22"){
                wordString = AddWordString(ADV, ADV);
            }
            else if(codeString == "33"){
                wordString = AddWordString(NOUN_ALIVE_ABSTRACT, NOUN);
            }
            else if(codeString == "43"){
                var _43TagStringArray:Array<String> = new Array<String>();
                var loopCounter2Int:Int = 0;
                var randomIndexInt:Int = 0;
                while(loopCounter2Int < visitorObject.GetTagObjectArray().length){
                    if(visitorObject.GetTagObjectArray()[loopCounter2Int].GetTypeEnum() == NOUN_ALIVE_CONCRETE){
                        _43TagStringArray.push(visitorObject.GetTagObjectArray()[loopCounter2Int].GetNounString());
                    }
                    loopCounter2Int ++;
                }
                if(_43TagStringArray.length == 0){
                    loopCounter2Int = 0;
                    while(loopCounter2Int < collectionGlobalObject.GetTagGeneralObjectArray().length){
                        if(collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter2Int].GetTypeEnum() == NOUN_ALIVE_CONCRETE){
                            _43TagStringArray.push(collectionGlobalObject.GetTagGeneralObjectArray()[loopCounter2Int].GetNounString());
                        }
                        loopCounter2Int ++;
                    }
                }
                randomIndexInt = RandomNumberGeneratorInt(_43TagStringArray.length);
                if(visitorObject.GetNameString() == ""){
                    wordString = _43TagStringArray[randomIndexInt];
                }
                else if(visitorObject.GetNameString() != ""){
                    if(Math.random() > 0.5){
                        wordString = visitorObject.GetNameString();
                    }
                    else{ wordString = _43TagStringArray[randomIndexInt]; }
                }
            }
            else if(codeString == "65"){
                wordString = AddWordString(NOUN_INANIMATE_HOLD_CONCRETE, NOUN_S);
            }
            else if(codeString == "93"){
                wordString = AddWordString(NOUN_INANIMATE_PLACE_CONCRETE_OWNER, NOUN);
            }
            else if(codeString == "A3"){
                wordString = AddWordString(NOUN_INANIMATE_SEE_CONCRETE, NOUN);
            }
            else if(codeString == "E7"){
                wordString = AddWordString(VERB_INTRANSITIVE, VERB_1);
            }
            else if(codeString == "E8"){
                wordString = AddWordString(VERB_INTRANSITIVE, VERB_2);
            }
            else if(codeString == "EA"){
                wordString = AddWordString(VERB_INTRANSITIVE, VERB_S);
            }
            else{
                wordString = scan1String;
            }
            sentenceString = sentenceString + wordString;
        }
        return sentenceString;
    }
    private function RandomNumberGeneratorInt(_randomNumberInt:Int){ return Math.round(Math.random()*(_randomNumberInt - 1)); }
    private function WordFixString(_fixString:String){
        var fix1String:String = _fixString.substring(0, 1).toUpperCase();
        var fix2String:String = _fixString.substring(1, _fixString.length);
        var fix3String:String = fix1String + fix2String;
        return fix3String;
    }
    public function GenerateSentence3String(collectionGlobalObject:CollectionGlobal){
        var patternStringArray2D:Array<Array<String>> = new Array<Array<String>>();
        patternStringArray2D = [

            [

                /*
                An old silent pond...
                A frog jumps into the pond,
                splash! Silence again.
                */
                "43 Owns 93...",
                "43 EA On The 93.",
                "The 33 EA Again."

            ],
            [

                /*
                Autumn moonlight—
                a worm digs silently
                into the chestnut.
                */
                "A3.",
                "43 EA 22.",
                "Into The 93."

            ],
            [

                /*
                Lightning flash—
                what I thought were faces
                are plumes of pampas grass.
                */
                "A3 EA 22.",
                "What I E8 Were 33...",
                "Are 65 Of 93."

            ]

        ];
        var stringPatternIndexInt:Int = RandomNumberGeneratorInt(patternStringArray2D.length);
        var stringPatternIndexString:Array<String> = patternStringArray2D[stringPatternIndexInt];
        var threeSentenceString:String = "";
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < 3){
            //var sentenceString:String = WordFixString(GenerateSentenceString(stringPatternIndexString[loopCounter1Int]));
            var sentenceString:String = GenerateSentenceString(stringPatternIndexString[loopCounter1Int]);
            threeSentenceString = Std.string(threeSentenceString + sentenceString + "\n");
            loopCounter1Int ++;
        }
        return threeSentenceString;
    }
}
