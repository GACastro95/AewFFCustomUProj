// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPlayerChoicesWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlayerChoicesWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerChoicesWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPlayerChoicesWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELPlayerChoicesWidgetBase::execGetPlayerChoicesText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=P_THIS->GetPlayerChoicesText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerChoicesWidgetBase::execGetTitleKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTitleKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerChoicesWidgetBase::execGetTitleText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTitleText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerChoicesWidgetBase::execIsDecision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDecision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerChoicesWidgetBase::execIsPlayerChoiceWidgetOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerChoiceWidgetOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerChoicesWidgetBase::execSetDecision)
	{
		P_GET_UBOOL(Z_Param__bDecision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDecision(Z_Param__bDecision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerChoicesWidgetBase::execSetPlayerChoicesText)
	{
		P_GET_TARRAY(FText,Z_Param__PlayerChoicesText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerChoicesText(Z_Param__PlayerChoicesText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerChoicesWidgetBase::execSetPlayerChoiceWidgetOpen)
	{
		P_GET_UBOOL(Z_Param__bOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerChoiceWidgetOpen(Z_Param__bOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerChoicesWidgetBase::execSetTitleKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__TitleKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTitleKey(Z_Param__TitleKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPlayerChoicesWidgetBase::execSetTitleText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param__TitleText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTitleText(Z_Param__TitleText);
		P_NATIVE_END;
	}
	void UELPlayerChoicesWidgetBase::StaticRegisterNativesUELPlayerChoicesWidgetBase()
	{
		UClass* Class = UELPlayerChoicesWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerChoicesText", &UELPlayerChoicesWidgetBase::execGetPlayerChoicesText },
			{ "GetTitleKey", &UELPlayerChoicesWidgetBase::execGetTitleKey },
			{ "GetTitleText", &UELPlayerChoicesWidgetBase::execGetTitleText },
			{ "IsDecision", &UELPlayerChoicesWidgetBase::execIsDecision },
			{ "IsPlayerChoiceWidgetOpen", &UELPlayerChoicesWidgetBase::execIsPlayerChoiceWidgetOpen },
			{ "SetDecision", &UELPlayerChoicesWidgetBase::execSetDecision },
			{ "SetPlayerChoicesText", &UELPlayerChoicesWidgetBase::execSetPlayerChoicesText },
			{ "SetPlayerChoiceWidgetOpen", &UELPlayerChoicesWidgetBase::execSetPlayerChoiceWidgetOpen },
			{ "SetTitleKey", &UELPlayerChoicesWidgetBase::execSetTitleKey },
			{ "SetTitleText", &UELPlayerChoicesWidgetBase::execSetTitleText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics
	{
		struct ELPlayerChoicesWidgetBase_eventGetPlayerChoicesText_Parms
		{
			TArray<FText> ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerChoicesWidgetBase_eventGetPlayerChoicesText_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerChoicesWidgetBase, nullptr, "GetPlayerChoicesText", nullptr, nullptr, sizeof(ELPlayerChoicesWidgetBase_eventGetPlayerChoicesText_Parms), Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics
	{
		struct ELPlayerChoicesWidgetBase_eventGetTitleKey_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerChoicesWidgetBase_eventGetTitleKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerChoicesWidgetBase, nullptr, "GetTitleKey", nullptr, nullptr, sizeof(ELPlayerChoicesWidgetBase_eventGetTitleKey_Parms), Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics
	{
		struct ELPlayerChoicesWidgetBase_eventGetTitleText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerChoicesWidgetBase_eventGetTitleText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerChoicesWidgetBase, nullptr, "GetTitleText", nullptr, nullptr, sizeof(ELPlayerChoicesWidgetBase_eventGetTitleText_Parms), Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics
	{
		struct ELPlayerChoicesWidgetBase_eventIsDecision_Parms
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
	void Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlayerChoicesWidgetBase_eventIsDecision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerChoicesWidgetBase_eventIsDecision_Parms), &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerChoicesWidgetBase, nullptr, "IsDecision", nullptr, nullptr, sizeof(ELPlayerChoicesWidgetBase_eventIsDecision_Parms), Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics
	{
		struct ELPlayerChoicesWidgetBase_eventIsPlayerChoiceWidgetOpen_Parms
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
	void Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELPlayerChoicesWidgetBase_eventIsPlayerChoiceWidgetOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerChoicesWidgetBase_eventIsPlayerChoiceWidgetOpen_Parms), &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerChoicesWidgetBase, nullptr, "IsPlayerChoiceWidgetOpen", nullptr, nullptr, sizeof(ELPlayerChoicesWidgetBase_eventIsPlayerChoiceWidgetOpen_Parms), Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics
	{
		struct ELPlayerChoicesWidgetBase_eventSetDecision_Parms
		{
			bool _bDecision;
		};
		static void NewProp__bDecision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDecision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::NewProp__bDecision_SetBit(void* Obj)
	{
		((ELPlayerChoicesWidgetBase_eventSetDecision_Parms*)Obj)->_bDecision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::NewProp__bDecision = { "_bDecision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerChoicesWidgetBase_eventSetDecision_Parms), &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::NewProp__bDecision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::NewProp__bDecision,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerChoicesWidgetBase, nullptr, "SetDecision", nullptr, nullptr, sizeof(ELPlayerChoicesWidgetBase_eventSetDecision_Parms), Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics
	{
		struct ELPlayerChoicesWidgetBase_eventSetPlayerChoicesText_Parms
		{
			TArray<FText> _PlayerChoicesText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__PlayerChoicesText_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__PlayerChoicesText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::NewProp__PlayerChoicesText_Inner = { "_PlayerChoicesText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::NewProp__PlayerChoicesText = { "_PlayerChoicesText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerChoicesWidgetBase_eventSetPlayerChoicesText_Parms, _PlayerChoicesText), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::NewProp__PlayerChoicesText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::NewProp__PlayerChoicesText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerChoicesWidgetBase, nullptr, "SetPlayerChoicesText", nullptr, nullptr, sizeof(ELPlayerChoicesWidgetBase_eventSetPlayerChoicesText_Parms), Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics
	{
		struct ELPlayerChoicesWidgetBase_eventSetPlayerChoiceWidgetOpen_Parms
		{
			bool _bOpen;
		};
		static void NewProp__bOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bOpen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::NewProp__bOpen_SetBit(void* Obj)
	{
		((ELPlayerChoicesWidgetBase_eventSetPlayerChoiceWidgetOpen_Parms*)Obj)->_bOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::NewProp__bOpen = { "_bOpen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELPlayerChoicesWidgetBase_eventSetPlayerChoiceWidgetOpen_Parms), &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::NewProp__bOpen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::NewProp__bOpen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerChoicesWidgetBase, nullptr, "SetPlayerChoiceWidgetOpen", nullptr, nullptr, sizeof(ELPlayerChoicesWidgetBase_eventSetPlayerChoiceWidgetOpen_Parms), Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics
	{
		struct ELPlayerChoicesWidgetBase_eventSetTitleKey_Parms
		{
			FString _TitleKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__TitleKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__TitleKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::NewProp__TitleKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::NewProp__TitleKey = { "_TitleKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerChoicesWidgetBase_eventSetTitleKey_Parms, _TitleKey), METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::NewProp__TitleKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::NewProp__TitleKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::NewProp__TitleKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerChoicesWidgetBase, nullptr, "SetTitleKey", nullptr, nullptr, sizeof(ELPlayerChoicesWidgetBase_eventSetTitleKey_Parms), Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics
	{
		struct ELPlayerChoicesWidgetBase_eventSetTitleText_Parms
		{
			FText _TitleText;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__TitleText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics::NewProp__TitleText = { "_TitleText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPlayerChoicesWidgetBase_eventSetTitleText_Parms, _TitleText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics::NewProp__TitleText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPlayerChoicesWidgetBase, nullptr, "SetTitleText", nullptr, nullptr, sizeof(ELPlayerChoicesWidgetBase_eventSetTitleText_Parms), Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPlayerChoicesWidgetBase_NoRegister()
	{
		return UELPlayerChoicesWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELPlayerChoicesWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPlayerChoicesWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPlayerChoicesWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetPlayerChoicesText, "GetPlayerChoicesText" }, // 4139810340
		{ &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleKey, "GetTitleKey" }, // 328216527
		{ &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_GetTitleText, "GetTitleText" }, // 3751275671
		{ &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsDecision, "IsDecision" }, // 268124128
		{ &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_IsPlayerChoiceWidgetOpen, "IsPlayerChoiceWidgetOpen" }, // 2529580937
		{ &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetDecision, "SetDecision" }, // 931624408
		{ &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoicesText, "SetPlayerChoicesText" }, // 82061621
		{ &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetPlayerChoiceWidgetOpen, "SetPlayerChoiceWidgetOpen" }, // 3811344076
		{ &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleKey, "SetTitleKey" }, // 2510074218
		{ &Z_Construct_UFunction_UELPlayerChoicesWidgetBase_SetTitleText, "SetTitleText" }, // 1883386902
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPlayerChoicesWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPlayerChoicesWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerChoicesWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPlayerChoicesWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPlayerChoicesWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPlayerChoicesWidgetBase_Statics::ClassParams = {
		&UELPlayerChoicesWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELPlayerChoicesWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPlayerChoicesWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPlayerChoicesWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPlayerChoicesWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPlayerChoicesWidgetBase, 1764499404);
	template<> ABP_200508_API UClass* StaticClass<UELPlayerChoicesWidgetBase>()
	{
		return UELPlayerChoicesWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPlayerChoicesWidgetBase(Z_Construct_UClass_UELPlayerChoicesWidgetBase, &UELPlayerChoicesWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPlayerChoicesWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPlayerChoicesWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
