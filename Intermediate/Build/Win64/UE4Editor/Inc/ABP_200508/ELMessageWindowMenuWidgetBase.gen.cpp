// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMessageWindowMenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMessageWindowMenuWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMessageWindowMenuWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMessageWindowMenuWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerRewardEffectType();
// End Cross Module References
	DEFINE_FUNCTION(UELMessageWindowMenuWidgetBase::execGetMessageKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetMessageKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMessageWindowMenuWidgetBase::execParseStringWithLinefeed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->ParseStringWithLinefeed(Z_Param__String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMessageWindowMenuWidgetBase::execSetMessageKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param__String);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMessageKey(Z_Param__String);
		P_NATIVE_END;
	}
	static FName NAME_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture = FName(TEXT("SetSquareEffectTexture"));
	void UELMessageWindowMenuWidgetBase::SetSquareEffectTexture(UTexture2D* pOverWriteTexture)
	{
		ELMessageWindowMenuWidgetBase_eventSetSquareEffectTexture_Parms Parms;
		Parms.pOverWriteTexture=pOverWriteTexture;
		ProcessEvent(FindFunctionChecked(NAME_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture),&Parms);
	}
	static FName NAME_UELMessageWindowMenuWidgetBase_SetupText = FName(TEXT("SetupText"));
	void UELMessageWindowMenuWidgetBase::SetupText()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELMessageWindowMenuWidgetBase_SetupText),NULL);
	}
	static FName NAME_UELMessageWindowMenuWidgetBase_SetupTextByStringID = FName(TEXT("SetupTextByStringID"));
	void UELMessageWindowMenuWidgetBase::SetupTextByStringID(FName _StringID, bool _bReplace, FName _ReplaceString, ECareerRewardEffectType _type)
	{
		ELMessageWindowMenuWidgetBase_eventSetupTextByStringID_Parms Parms;
		Parms._StringID=_StringID;
		Parms._bReplace=_bReplace ? true : false;
		Parms._ReplaceString=_ReplaceString;
		Parms._type=_type;
		ProcessEvent(FindFunctionChecked(NAME_UELMessageWindowMenuWidgetBase_SetupTextByStringID),&Parms);
	}
	void UELMessageWindowMenuWidgetBase::StaticRegisterNativesUELMessageWindowMenuWidgetBase()
	{
		UClass* Class = UELMessageWindowMenuWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMessageKey", &UELMessageWindowMenuWidgetBase::execGetMessageKey },
			{ "ParseStringWithLinefeed", &UELMessageWindowMenuWidgetBase::execParseStringWithLinefeed },
			{ "SetMessageKey", &UELMessageWindowMenuWidgetBase::execSetMessageKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics
	{
		struct ELMessageWindowMenuWidgetBase_eventGetMessageKey_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMessageWindowMenuWidgetBase_eventGetMessageKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMessageWindowMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMessageWindowMenuWidgetBase, nullptr, "GetMessageKey", nullptr, nullptr, sizeof(ELMessageWindowMenuWidgetBase_eventGetMessageKey_Parms), Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics
	{
		struct ELMessageWindowMenuWidgetBase_eventParseStringWithLinefeed_Parms
		{
			FString _String;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__String_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__String;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::NewProp__String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::NewProp__String = { "_String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMessageWindowMenuWidgetBase_eventParseStringWithLinefeed_Parms, _String), METADATA_PARAMS(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::NewProp__String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::NewProp__String_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMessageWindowMenuWidgetBase_eventParseStringWithLinefeed_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::NewProp__String,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMessageWindowMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMessageWindowMenuWidgetBase, nullptr, "ParseStringWithLinefeed", nullptr, nullptr, sizeof(ELMessageWindowMenuWidgetBase_eventParseStringWithLinefeed_Parms), Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics
	{
		struct ELMessageWindowMenuWidgetBase_eventSetMessageKey_Parms
		{
			FName _String;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__String;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics::NewProp__String = { "_String", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMessageWindowMenuWidgetBase_eventSetMessageKey_Parms, _String), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics::NewProp__String,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMessageWindowMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMessageWindowMenuWidgetBase, nullptr, "SetMessageKey", nullptr, nullptr, sizeof(ELMessageWindowMenuWidgetBase_eventSetMessageKey_Parms), Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pOverWriteTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics::NewProp_pOverWriteTexture = { "pOverWriteTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMessageWindowMenuWidgetBase_eventSetSquareEffectTexture_Parms, pOverWriteTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics::NewProp_pOverWriteTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMessageWindowMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMessageWindowMenuWidgetBase, nullptr, "SetSquareEffectTexture", nullptr, nullptr, sizeof(ELMessageWindowMenuWidgetBase_eventSetSquareEffectTexture_Parms), Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMessageWindowMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMessageWindowMenuWidgetBase, nullptr, "SetupText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__StringID;
		static void NewProp__bReplace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bReplace;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__ReplaceString;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__StringID = { "_StringID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMessageWindowMenuWidgetBase_eventSetupTextByStringID_Parms, _StringID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__bReplace_SetBit(void* Obj)
	{
		((ELMessageWindowMenuWidgetBase_eventSetupTextByStringID_Parms*)Obj)->_bReplace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__bReplace = { "_bReplace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMessageWindowMenuWidgetBase_eventSetupTextByStringID_Parms), &Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__bReplace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__ReplaceString = { "_ReplaceString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMessageWindowMenuWidgetBase_eventSetupTextByStringID_Parms, _ReplaceString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMessageWindowMenuWidgetBase_eventSetupTextByStringID_Parms, _type), Z_Construct_UEnum_ABP_200508_ECareerRewardEffectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__StringID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__bReplace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__ReplaceString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::NewProp__type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMessageWindowMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMessageWindowMenuWidgetBase, nullptr, "SetupTextByStringID", nullptr, nullptr, sizeof(ELMessageWindowMenuWidgetBase_eventSetupTextByStringID_Parms), Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMessageWindowMenuWidgetBase_NoRegister()
	{
		return UELMessageWindowMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_GetMessageKey, "GetMessageKey" }, // 770408154
		{ &Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_ParseStringWithLinefeed, "ParseStringWithLinefeed" }, // 2804795306
		{ &Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetMessageKey, "SetMessageKey" }, // 593567564
		{ &Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetSquareEffectTexture, "SetSquareEffectTexture" }, // 4021567721
		{ &Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupText, "SetupText" }, // 2726293320
		{ &Z_Construct_UFunction_UELMessageWindowMenuWidgetBase_SetupTextByStringID, "SetupTextByStringID" }, // 1399519276
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMessageWindowMenuWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMessageWindowMenuWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMessageWindowMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics::ClassParams = {
		&UELMessageWindowMenuWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMessageWindowMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMessageWindowMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMessageWindowMenuWidgetBase, 3140397094);
	template<> ABP_200508_API UClass* StaticClass<UELMessageWindowMenuWidgetBase>()
	{
		return UELMessageWindowMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMessageWindowMenuWidgetBase(Z_Construct_UClass_UELMessageWindowMenuWidgetBase, &UELMessageWindowMenuWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMessageWindowMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMessageWindowMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
