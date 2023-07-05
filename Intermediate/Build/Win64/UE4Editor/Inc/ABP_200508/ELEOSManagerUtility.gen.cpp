// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSManagerUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSManagerUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSManagerUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSManagerUtility();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameText();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSSanitizePartyChatEvent__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSSanitizeTextPartyChat_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSSanitizeWrestlerNameTextEvent__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSSanitizeTextWrestlerData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSManagerUtility::execIsValidOnlineWrestlerData)
	{
		P_GET_OBJECT(UObject,Z_Param_OnlineWrestlerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidOnlineWrestlerData_Implementation(Z_Param_OnlineWrestlerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSManagerUtility::execOnSanitizeText_All)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_SanitizeText);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSanitizeText_All(Z_Param_Out_SanitizeText,Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSManagerUtility::execOnSanitizeText_MultilineRingName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SanitizeText);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSanitizeText_MultilineRingName(Z_Param_SanitizeText,Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSManagerUtility::execOnSanitizeText_NickName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SanitizeText);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSanitizeText_NickName(Z_Param_SanitizeText,Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSManagerUtility::execOnSanitizeText_PartyChat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SanitizeText);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSanitizeText_PartyChat(Z_Param_SanitizeText,Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSManagerUtility::execOnSanitizeText_RingName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SanitizeText);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSanitizeText_RingName(Z_Param_SanitizeText,Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSManagerUtility::execOnSanitizeText_ShortName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SanitizeText);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSanitizeText_ShortName(Z_Param_SanitizeText,Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSManagerUtility::execOnSanitizeText_SnsAccount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SanitizeText);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSanitizeText_SnsAccount(Z_Param_SanitizeText,Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSManagerUtility::execOnSanitizeText_SpokenName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SanitizeText);
		P_GET_OBJECT(UObject,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSanitizeText_SpokenName(Z_Param_SanitizeText,Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSManagerUtility::execRequestSanitizePartyChat)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_OBJECT(UELEOSSanitizeTextPartyChat,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSanitizePartyChat(FEOSSanitizePartyChatEvent(Z_Param_Delegate),Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSManagerUtility::execRequestSanitizeWrestlerName)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_OBJECT(UELEOSSanitizeTextWrestlerData,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSanitizeWrestlerName(FEOSSanitizeWrestlerNameTextEvent(Z_Param_Delegate),Z_Param_UserData);
		P_NATIVE_END;
	}
	static FName NAME_UELEOSManagerUtility_ApplyWrestlerNameText = FName(TEXT("ApplyWrestlerNameText"));
	void UELEOSManagerUtility::ApplyWrestlerNameText(UObject* OnlineWrestlerData, FWrestlerNameText const& WrestlerName)
	{
		ELEOSManagerUtility_eventApplyWrestlerNameText_Parms Parms;
		Parms.OnlineWrestlerData=OnlineWrestlerData;
		Parms.WrestlerName=WrestlerName;
		ProcessEvent(FindFunctionChecked(NAME_UELEOSManagerUtility_ApplyWrestlerNameText),&Parms);
	}
	static FName NAME_UELEOSManagerUtility_GetWrestlerNameText = FName(TEXT("GetWrestlerNameText"));
	bool UELEOSManagerUtility::GetWrestlerNameText(UObject* OnlineWrestlerData, FWrestlerNameText& WrestlerName)
	{
		ELEOSManagerUtility_eventGetWrestlerNameText_Parms Parms;
		Parms.OnlineWrestlerData=OnlineWrestlerData;
		Parms.WrestlerName=WrestlerName;
		ProcessEvent(FindFunctionChecked(NAME_UELEOSManagerUtility_GetWrestlerNameText),&Parms);
		WrestlerName=Parms.WrestlerName;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELEOSManagerUtility_IsValidOnlineWrestlerData = FName(TEXT("IsValidOnlineWrestlerData"));
	bool UELEOSManagerUtility::IsValidOnlineWrestlerData(UObject* OnlineWrestlerData)
	{
		ELEOSManagerUtility_eventIsValidOnlineWrestlerData_Parms Parms;
		Parms.OnlineWrestlerData=OnlineWrestlerData;
		ProcessEvent(FindFunctionChecked(NAME_UELEOSManagerUtility_IsValidOnlineWrestlerData),&Parms);
		return !!Parms.ReturnValue;
	}
	void UELEOSManagerUtility::StaticRegisterNativesUELEOSManagerUtility()
	{
		UClass* Class = UELEOSManagerUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValidOnlineWrestlerData", &UELEOSManagerUtility::execIsValidOnlineWrestlerData },
			{ "OnSanitizeText_All", &UELEOSManagerUtility::execOnSanitizeText_All },
			{ "OnSanitizeText_MultilineRingName", &UELEOSManagerUtility::execOnSanitizeText_MultilineRingName },
			{ "OnSanitizeText_NickName", &UELEOSManagerUtility::execOnSanitizeText_NickName },
			{ "OnSanitizeText_PartyChat", &UELEOSManagerUtility::execOnSanitizeText_PartyChat },
			{ "OnSanitizeText_RingName", &UELEOSManagerUtility::execOnSanitizeText_RingName },
			{ "OnSanitizeText_ShortName", &UELEOSManagerUtility::execOnSanitizeText_ShortName },
			{ "OnSanitizeText_SnsAccount", &UELEOSManagerUtility::execOnSanitizeText_SnsAccount },
			{ "OnSanitizeText_SpokenName", &UELEOSManagerUtility::execOnSanitizeText_SpokenName },
			{ "RequestSanitizePartyChat", &UELEOSManagerUtility::execRequestSanitizePartyChat },
			{ "RequestSanitizeWrestlerName", &UELEOSManagerUtility::execRequestSanitizeWrestlerName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineWrestlerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::NewProp_OnlineWrestlerData = { "OnlineWrestlerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventApplyWrestlerNameText_Parms, OnlineWrestlerData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventApplyWrestlerNameText_Parms, WrestlerName), Z_Construct_UScriptStruct_FWrestlerNameText, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::NewProp_WrestlerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::NewProp_OnlineWrestlerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::NewProp_WrestlerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "ApplyWrestlerNameText", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventApplyWrestlerNameText_Parms), Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineWrestlerData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::NewProp_OnlineWrestlerData = { "OnlineWrestlerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventGetWrestlerNameText_Parms, OnlineWrestlerData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventGetWrestlerNameText_Parms, WrestlerName), Z_Construct_UScriptStruct_FWrestlerNameText, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSManagerUtility_eventGetWrestlerNameText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSManagerUtility_eventGetWrestlerNameText_Parms), &Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::NewProp_OnlineWrestlerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::NewProp_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "GetWrestlerNameText", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventGetWrestlerNameText_Parms), Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineWrestlerData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::NewProp_OnlineWrestlerData = { "OnlineWrestlerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventIsValidOnlineWrestlerData_Parms, OnlineWrestlerData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSManagerUtility_eventIsValidOnlineWrestlerData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSManagerUtility_eventIsValidOnlineWrestlerData_Parms), &Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::NewProp_OnlineWrestlerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "IsValidOnlineWrestlerData", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventIsValidOnlineWrestlerData_Parms), Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics
	{
		struct ELEOSManagerUtility_eventOnSanitizeText_All_Parms
		{
			TArray<FString> SanitizeText;
			UObject* UserData;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizeText_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SanitizeText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::NewProp_SanitizeText_Inner = { "SanitizeText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::NewProp_SanitizeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::NewProp_SanitizeText = { "SanitizeText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_All_Parms, SanitizeText), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::NewProp_SanitizeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::NewProp_SanitizeText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_All_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::NewProp_SanitizeText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::NewProp_SanitizeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "OnSanitizeText_All", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventOnSanitizeText_All_Parms), Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics
	{
		struct ELEOSManagerUtility_eventOnSanitizeText_MultilineRingName_Parms
		{
			FString SanitizeText;
			UObject* UserData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizeText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::NewProp_SanitizeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::NewProp_SanitizeText = { "SanitizeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_MultilineRingName_Parms, SanitizeText), METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::NewProp_SanitizeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::NewProp_SanitizeText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_MultilineRingName_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::NewProp_SanitizeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "OnSanitizeText_MultilineRingName", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventOnSanitizeText_MultilineRingName_Parms), Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics
	{
		struct ELEOSManagerUtility_eventOnSanitizeText_NickName_Parms
		{
			FString SanitizeText;
			UObject* UserData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizeText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::NewProp_SanitizeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::NewProp_SanitizeText = { "SanitizeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_NickName_Parms, SanitizeText), METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::NewProp_SanitizeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::NewProp_SanitizeText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_NickName_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::NewProp_SanitizeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "OnSanitizeText_NickName", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventOnSanitizeText_NickName_Parms), Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics
	{
		struct ELEOSManagerUtility_eventOnSanitizeText_PartyChat_Parms
		{
			FString SanitizeText;
			UObject* UserData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizeText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::NewProp_SanitizeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::NewProp_SanitizeText = { "SanitizeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_PartyChat_Parms, SanitizeText), METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::NewProp_SanitizeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::NewProp_SanitizeText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_PartyChat_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::NewProp_SanitizeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "OnSanitizeText_PartyChat", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventOnSanitizeText_PartyChat_Parms), Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics
	{
		struct ELEOSManagerUtility_eventOnSanitizeText_RingName_Parms
		{
			FString SanitizeText;
			UObject* UserData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizeText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::NewProp_SanitizeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::NewProp_SanitizeText = { "SanitizeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_RingName_Parms, SanitizeText), METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::NewProp_SanitizeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::NewProp_SanitizeText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_RingName_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::NewProp_SanitizeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "OnSanitizeText_RingName", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventOnSanitizeText_RingName_Parms), Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics
	{
		struct ELEOSManagerUtility_eventOnSanitizeText_ShortName_Parms
		{
			FString SanitizeText;
			UObject* UserData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizeText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::NewProp_SanitizeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::NewProp_SanitizeText = { "SanitizeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_ShortName_Parms, SanitizeText), METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::NewProp_SanitizeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::NewProp_SanitizeText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_ShortName_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::NewProp_SanitizeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "OnSanitizeText_ShortName", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventOnSanitizeText_ShortName_Parms), Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics
	{
		struct ELEOSManagerUtility_eventOnSanitizeText_SnsAccount_Parms
		{
			FString SanitizeText;
			UObject* UserData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizeText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::NewProp_SanitizeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::NewProp_SanitizeText = { "SanitizeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_SnsAccount_Parms, SanitizeText), METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::NewProp_SanitizeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::NewProp_SanitizeText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_SnsAccount_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::NewProp_SanitizeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "OnSanitizeText_SnsAccount", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventOnSanitizeText_SnsAccount_Parms), Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics
	{
		struct ELEOSManagerUtility_eventOnSanitizeText_SpokenName_Parms
		{
			FString SanitizeText;
			UObject* UserData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizeText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizeText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::NewProp_SanitizeText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::NewProp_SanitizeText = { "SanitizeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_SpokenName_Parms, SanitizeText), METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::NewProp_SanitizeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::NewProp_SanitizeText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventOnSanitizeText_SpokenName_Parms, UserData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::NewProp_SanitizeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "OnSanitizeText_SpokenName", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventOnSanitizeText_SpokenName_Parms), Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics
	{
		struct ELEOSManagerUtility_eventRequestSanitizePartyChat_Parms
		{
			FScriptDelegate Delegate;
			UELEOSSanitizeTextPartyChat* UserData;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventRequestSanitizePartyChat_Parms, Delegate), Z_Construct_UDelegateFunction_ABP_200508_EOSSanitizePartyChatEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventRequestSanitizePartyChat_Parms, UserData), Z_Construct_UClass_UELEOSSanitizeTextPartyChat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "RequestSanitizePartyChat", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventRequestSanitizePartyChat_Parms), Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics
	{
		struct ELEOSManagerUtility_eventRequestSanitizeWrestlerName_Parms
		{
			FScriptDelegate Delegate;
			UELEOSSanitizeTextWrestlerData* UserData;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventRequestSanitizeWrestlerName_Parms, Delegate), Z_Construct_UDelegateFunction_ABP_200508_EOSSanitizeWrestlerNameTextEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSManagerUtility_eventRequestSanitizeWrestlerName_Parms, UserData), Z_Construct_UClass_UELEOSSanitizeTextWrestlerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSManagerUtility, nullptr, "RequestSanitizeWrestlerName", nullptr, nullptr, sizeof(ELEOSManagerUtility_eventRequestSanitizeWrestlerName_Parms), Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSManagerUtility_NoRegister()
	{
		return UELEOSManagerUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSManagerUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SanitizeRequestObjectMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SanitizeRequestObjectMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SanitizeRequestObjectMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SanitizeRequestObjectMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDisableTextFilter_MetaData[];
#endif
		static void NewProp_DebugDisableTextFilter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugDisableTextFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSManagerUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSManagerUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSManagerUtility_ApplyWrestlerNameText, "ApplyWrestlerNameText" }, // 1472299139
		{ &Z_Construct_UFunction_UELEOSManagerUtility_GetWrestlerNameText, "GetWrestlerNameText" }, // 3860402566
		{ &Z_Construct_UFunction_UELEOSManagerUtility_IsValidOnlineWrestlerData, "IsValidOnlineWrestlerData" }, // 657951633
		{ &Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_All, "OnSanitizeText_All" }, // 2869857196
		{ &Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_MultilineRingName, "OnSanitizeText_MultilineRingName" }, // 586568563
		{ &Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_NickName, "OnSanitizeText_NickName" }, // 315061378
		{ &Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_PartyChat, "OnSanitizeText_PartyChat" }, // 2779876889
		{ &Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_RingName, "OnSanitizeText_RingName" }, // 4060362900
		{ &Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_ShortName, "OnSanitizeText_ShortName" }, // 3331515070
		{ &Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SnsAccount, "OnSanitizeText_SnsAccount" }, // 2803276434
		{ &Z_Construct_UFunction_UELEOSManagerUtility_OnSanitizeText_SpokenName, "OnSanitizeText_SpokenName" }, // 3517160681
		{ &Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizePartyChat, "RequestSanitizePartyChat" }, // 3317164850
		{ &Z_Construct_UFunction_UELEOSManagerUtility_RequestSanitizeWrestlerName, "RequestSanitizeWrestlerName" }, // 2472690792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSManagerUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSManagerUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_SanitizeRequestObjectMap_ValueProp = { "SanitizeRequestObjectMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_SanitizeRequestObjectMap_Key_KeyProp = { "SanitizeRequestObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_SanitizeRequestObjectMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSManagerUtility" },
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_SanitizeRequestObjectMap = { "SanitizeRequestObjectMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSManagerUtility, SanitizeRequestObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_SanitizeRequestObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_SanitizeRequestObjectMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_DebugDisableTextFilter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSManagerUtility" },
		{ "ModuleRelativePath", "Public/ELEOSManagerUtility.h" },
	};
#endif
	void Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_DebugDisableTextFilter_SetBit(void* Obj)
	{
		((UELEOSManagerUtility*)Obj)->DebugDisableTextFilter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_DebugDisableTextFilter = { "DebugDisableTextFilter", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELEOSManagerUtility), &Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_DebugDisableTextFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_DebugDisableTextFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_DebugDisableTextFilter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSManagerUtility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_SanitizeRequestObjectMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_SanitizeRequestObjectMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_SanitizeRequestObjectMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSManagerUtility_Statics::NewProp_DebugDisableTextFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSManagerUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSManagerUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSManagerUtility_Statics::ClassParams = {
		&UELEOSManagerUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELEOSManagerUtility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSManagerUtility_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSManagerUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSManagerUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSManagerUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSManagerUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSManagerUtility, 3286681872);
	template<> ABP_200508_API UClass* StaticClass<UELEOSManagerUtility>()
	{
		return UELEOSManagerUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSManagerUtility(Z_Construct_UClass_UELEOSManagerUtility, &UELEOSManagerUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSManagerUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSManagerUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
