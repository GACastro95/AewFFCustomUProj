// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneAtomSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSection() {}
// Cross Module References
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister();
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParam();
// End Cross Module References
	DEFINE_FUNCTION(UMovieSceneAtomSection::execGetStartOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=P_THIS->GetStartOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneAtomSection::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneAtomSection::execSetStartOffset)
	{
		P_GET_STRUCT(FFrameNumber,Z_Param_InStartOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartOffset(Z_Param_InStartOffset);
		P_NATIVE_END;
	}
	void UMovieSceneAtomSection::StaticRegisterNativesUMovieSceneAtomSection()
	{
		UClass* Class = UMovieSceneAtomSection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStartOffset", &UMovieSceneAtomSection::execGetStartOffset },
			{ "IsLooping", &UMovieSceneAtomSection::execIsLooping },
			{ "SetStartOffset", &UMovieSceneAtomSection::execSetStartOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics
	{
		struct MovieSceneAtomSection_eventGetStartOffset_Parms
		{
			FFrameNumber ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneAtomSection_eventGetStartOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "GetStartOffset", nullptr, nullptr, sizeof(MovieSceneAtomSection_eventGetStartOffset_Parms), Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics
	{
		struct MovieSceneAtomSection_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneAtomSection_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovieSceneAtomSection_eventIsLooping_Parms), &Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "IsLooping", nullptr, nullptr, sizeof(MovieSceneAtomSection_eventIsLooping_Parms), Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics
	{
		struct MovieSceneAtomSection_eventSetStartOffset_Parms
		{
			FFrameNumber InStartOffset;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InStartOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::NewProp_InStartOffset = { "InStartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovieSceneAtomSection_eventSetStartOffset_Parms, InStartOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::NewProp_InStartOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneAtomSection, nullptr, "SetStartOffset", nullptr, nullptr, sizeof(MovieSceneAtomSection_eventSetStartOffset_Parms), Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister()
	{
		return UMovieSceneAtomSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAtomSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachActorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachActorData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScalarParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterNamesAndCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterNamesAndCurves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSuppressSubtitles_MetaData[];
#endif
		static void NewProp_bSuppressSubtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuppressSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideAttenuation_MetaData[];
#endif
		static void NewProp_bOverrideAttenuation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideAttenuation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bContinueSoundWhenSequenceIsEnd_MetaData[];
#endif
		static void NewProp_bContinueSoundWhenSequenceIsEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bContinueSoundWhenSequenceIsEnd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsrRackIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsrRackIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AsrRackIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectorLabels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorLabels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectorLabels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAtomSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneAtomSection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_GetStartOffset, "GetStartOffset" }, // 786619030
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_IsLooping, "IsLooping" }, // 2111513729
		{ &Z_Construct_UFunction_UMovieSceneAtomSection_SetStartOffset, "SetStartOffset" }, // 2916400593
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneAtomSection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAtomSection, Sound), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAtomSection, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume = { "SoundVolume", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAtomSection, SoundVolume), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAtomSection, PitchMultiplier), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData = { "AttachActorData", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAtomSection, AttachActorData), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves = { "ScalarParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAtomSection, ScalarParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bSuppressSubtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles = { "bSuppressSubtitles", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bOverrideAttenuation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation = { "bOverrideAttenuation", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAtomSection, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bContinueSoundWhenSequenceIsEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd = { "bContinueSoundWhenSequenceIsEnd", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_Inner = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs = { "AsrRackIDs", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAtomSection, AsrRackIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_Inner = { "SelectorLabels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomSelectorParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels = { "SelectorLabels", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAtomSection, SelectorLabels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSection" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UMovieSceneAtomSection*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneAtomSection), &Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_StartFrameOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SoundVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttachActorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_ScalarParameterNamesAndCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bSuppressSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bOverrideAttenuation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AttenuationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bContinueSoundWhenSequenceIsEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_AsrRackIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_SelectorLabels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAtomSection_Statics::NewProp_bLooping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAtomSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAtomSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAtomSection_Statics::ClassParams = {
		&UMovieSceneAtomSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAtomSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAtomSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneAtomSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAtomSection, 608539849);
	template<> CRIWAREMOVIESCENES_API UClass* StaticClass<UMovieSceneAtomSection>()
	{
		return UMovieSceneAtomSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAtomSection(Z_Construct_UClass_UMovieSceneAtomSection, &UMovieSceneAtomSection::StaticClass, TEXT("/Script/CriWareMovieScenes"), TEXT("UMovieSceneAtomSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAtomSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
