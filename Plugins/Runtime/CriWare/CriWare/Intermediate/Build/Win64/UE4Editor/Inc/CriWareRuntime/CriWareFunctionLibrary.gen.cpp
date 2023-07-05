// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriWareFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareFunctionLibrary() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareFunctionLibrary_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem();
// End Cross Module References
	DEFINE_FUNCTION(UCriWareFunctionLibrary::execSearchAtomCuesInAssetRegistry)
	{
		P_GET_OBJECT(USoundAtomCueSheet,Z_Param_CueSheet);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USoundAtomCue*>*)Z_Param__Result=UCriWareFunctionLibrary::SearchAtomCuesInAssetRegistry(Z_Param_CueSheet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriWareFunctionLibrary::execSetGameVariableByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameVariableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCriWareFunctionLibrary::SetGameVariableByName(Z_Param_GameVariableName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriWareFunctionLibrary::execSetGlobalLabelToSelectorByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectorName);
		P_GET_PROPERTY(FStrProperty,Z_Param_LabelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCriWareFunctionLibrary::SetGlobalLabelToSelectorByName(Z_Param_SelectorName,Z_Param_LabelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCriWareFunctionLibrary::execSetSpeakerAngleArray)
	{
		P_GET_ENUM(ECriWareSpeakerSystem,Z_Param_SpeakerSystem);
		P_GET_TARRAY_REF(float,Z_Param_Out_Angles);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCriWareFunctionLibrary::SetSpeakerAngleArray(ECriWareSpeakerSystem(Z_Param_SpeakerSystem),Z_Param_Out_Angles);
		P_NATIVE_END;
	}
	void UCriWareFunctionLibrary::StaticRegisterNativesUCriWareFunctionLibrary()
	{
		UClass* Class = UCriWareFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SearchAtomCuesInAssetRegistry", &UCriWareFunctionLibrary::execSearchAtomCuesInAssetRegistry },
			{ "SetGameVariableByName", &UCriWareFunctionLibrary::execSetGameVariableByName },
			{ "SetGlobalLabelToSelectorByName", &UCriWareFunctionLibrary::execSetGlobalLabelToSelectorByName },
			{ "SetSpeakerAngleArray", &UCriWareFunctionLibrary::execSetSpeakerAngleArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics
	{
		struct CriWareFunctionLibrary_eventSearchAtomCuesInAssetRegistry_Parms
		{
			const USoundAtomCueSheet* CueSheet;
			TArray<USoundAtomCue*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueSheet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueSheet;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::NewProp_CueSheet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::NewProp_CueSheet = { "CueSheet", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSearchAtomCuesInAssetRegistry_Parms, CueSheet), Z_Construct_UClass_USoundAtomCueSheet_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::NewProp_CueSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::NewProp_CueSheet_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSearchAtomCuesInAssetRegistry_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::NewProp_CueSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareFunctionLibrary, nullptr, "SearchAtomCuesInAssetRegistry", nullptr, nullptr, sizeof(CriWareFunctionLibrary_eventSearchAtomCuesInAssetRegistry_Parms), Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics
	{
		struct CriWareFunctionLibrary_eventSetGameVariableByName_Parms
		{
			FString GameVariableName;
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameVariableName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_GameVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_GameVariableName = { "GameVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGameVariableByName_Parms, GameVariableName), METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_GameVariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_GameVariableName_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGameVariableByName_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_GameVariableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareFunctionLibrary, nullptr, "SetGameVariableByName", nullptr, nullptr, sizeof(CriWareFunctionLibrary_eventSetGameVariableByName_Parms), Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics
	{
		struct CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms
		{
			FString SelectorName;
			FString LabelName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LabelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_SelectorName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_SelectorName = { "SelectorName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms, SelectorName), METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_SelectorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_SelectorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_LabelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_LabelName = { "LabelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms, LabelName), METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_LabelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_LabelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_SelectorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::NewProp_LabelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareFunctionLibrary, nullptr, "SetGlobalLabelToSelectorByName", nullptr, nullptr, sizeof(CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms), Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics
	{
		struct CriWareFunctionLibrary_eventSetSpeakerAngleArray_Parms
		{
			ECriWareSpeakerSystem SpeakerSystem;
			TArray<float> Angles;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpeakerSystem_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpeakerSystem;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Angles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_SpeakerSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_SpeakerSystem = { "SpeakerSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetSpeakerAngleArray_Parms, SpeakerSystem), Z_Construct_UEnum_CriWareRuntime_ECriWareSpeakerSystem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles_Inner = { "Angles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles = { "Angles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CriWareFunctionLibrary_eventSetSpeakerAngleArray_Parms, Angles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_SpeakerSystem_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_SpeakerSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::NewProp_Angles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CriWareFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCriWareFunctionLibrary, nullptr, "SetSpeakerAngleArray", nullptr, nullptr, sizeof(CriWareFunctionLibrary_eventSetSpeakerAngleArray_Parms), Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCriWareFunctionLibrary_NoRegister()
	{
		return UCriWareFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCriWareFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCriWareFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCriWareFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCriWareFunctionLibrary_SearchAtomCuesInAssetRegistry, "SearchAtomCuesInAssetRegistry" }, // 769405390
		{ &Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName, "SetGameVariableByName" }, // 3831949942
		{ &Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName, "SetGlobalLabelToSelectorByName" }, // 4089270456
		{ &Z_Construct_UFunction_UCriWareFunctionLibrary_SetSpeakerAngleArray, "SetSpeakerAngleArray" }, // 3915732554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCriWareFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CriWareFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriWareFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCriWareFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCriWareFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCriWareFunctionLibrary_Statics::ClassParams = {
		&UCriWareFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCriWareFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCriWareFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCriWareFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCriWareFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWareFunctionLibrary, 2251462751);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UCriWareFunctionLibrary>()
	{
		return UCriWareFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWareFunctionLibrary(Z_Construct_UClass_UCriWareFunctionLibrary, &UCriWareFunctionLibrary::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWareFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
