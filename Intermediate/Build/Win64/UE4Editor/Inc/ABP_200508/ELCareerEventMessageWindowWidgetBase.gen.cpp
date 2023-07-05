// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerEventMessageWindowWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerEventMessageWindowWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventActionMember();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutsceneMessageCastType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutsceneExtraInfo();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerEventMessageWindowWidgetBase::execIsCutOffMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCutOffMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerEventMessageWindowWidgetBase::execSetNowSpeaker)
	{
		P_GET_ENUM(ECareerEventActionMember,Z_Param_eMember);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNowSpeaker(ECareerEventActionMember(Z_Param_eMember));
		P_NATIVE_END;
	}
	static FName NAME_UELCareerEventMessageWindowWidgetBase_CloseMenuCutscene = FName(TEXT("CloseMenuCutscene"));
	void UELCareerEventMessageWindowWidgetBase::CloseMenuCutscene()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerEventMessageWindowWidgetBase_CloseMenuCutscene),NULL);
	}
	static FName NAME_UELCareerEventMessageWindowWidgetBase_IsCanDecision = FName(TEXT("IsCanDecision"));
	bool UELCareerEventMessageWindowWidgetBase::IsCanDecision()
	{
		ELCareerEventMessageWindowWidgetBase_eventIsCanDecision_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerEventMessageWindowWidgetBase_IsCanDecision),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELCareerEventMessageWindowWidgetBase_OpenMenuCutscene = FName(TEXT("OpenMenuCutscene"));
	void UELCareerEventMessageWindowWidgetBase::OpenMenuCutscene()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerEventMessageWindowWidgetBase_OpenMenuCutscene),NULL);
	}
	static FName NAME_UELCareerEventMessageWindowWidgetBase_SetupText = FName(TEXT("SetupText"));
	void UELCareerEventMessageWindowWidgetBase::SetupText()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerEventMessageWindowWidgetBase_SetupText),NULL);
	}
	static FName NAME_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene = FName(TEXT("SetupTextCutscene"));
	void UELCareerEventMessageWindowWidgetBase::SetupTextCutscene(FName MessageKey, ECareerCutsceneMessageCastType eMessageCast, ECareerCutsceneExtraInfo eExtraInfo)
	{
		ELCareerEventMessageWindowWidgetBase_eventSetupTextCutscene_Parms Parms;
		Parms.MessageKey=MessageKey;
		Parms.eMessageCast=eMessageCast;
		Parms.eExtraInfo=eExtraInfo;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene),&Parms);
	}
	void UELCareerEventMessageWindowWidgetBase::StaticRegisterNativesUELCareerEventMessageWindowWidgetBase()
	{
		UClass* Class = UELCareerEventMessageWindowWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCutOffMessage", &UELCareerEventMessageWindowWidgetBase::execIsCutOffMessage },
			{ "SetNowSpeaker", &UELCareerEventMessageWindowWidgetBase::execSetNowSpeaker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_CloseMenuCutscene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_CloseMenuCutscene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventMessageWindowWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_CloseMenuCutscene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase, nullptr, "CloseMenuCutscene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_CloseMenuCutscene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_CloseMenuCutscene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_CloseMenuCutscene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_CloseMenuCutscene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerEventMessageWindowWidgetBase_eventIsCanDecision_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerEventMessageWindowWidgetBase_eventIsCanDecision_Parms), &Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventMessageWindowWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase, nullptr, "IsCanDecision", nullptr, nullptr, sizeof(ELCareerEventMessageWindowWidgetBase_eventIsCanDecision_Parms), Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics
	{
		struct ELCareerEventMessageWindowWidgetBase_eventIsCutOffMessage_Parms
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
	void Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerEventMessageWindowWidgetBase_eventIsCutOffMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerEventMessageWindowWidgetBase_eventIsCutOffMessage_Parms), &Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventMessageWindowWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase, nullptr, "IsCutOffMessage", nullptr, nullptr, sizeof(ELCareerEventMessageWindowWidgetBase_eventIsCutOffMessage_Parms), Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_OpenMenuCutscene_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_OpenMenuCutscene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventMessageWindowWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_OpenMenuCutscene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase, nullptr, "OpenMenuCutscene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_OpenMenuCutscene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_OpenMenuCutscene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_OpenMenuCutscene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_OpenMenuCutscene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics
	{
		struct ELCareerEventMessageWindowWidgetBase_eventSetNowSpeaker_Parms
		{
			ECareerEventActionMember eMember;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eMember_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::NewProp_eMember_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::NewProp_eMember = { "eMember", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventMessageWindowWidgetBase_eventSetNowSpeaker_Parms, eMember), Z_Construct_UEnum_ABP_200508_ECareerEventActionMember, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::NewProp_eMember_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::NewProp_eMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventMessageWindowWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase, nullptr, "SetNowSpeaker", nullptr, nullptr, sizeof(ELCareerEventMessageWindowWidgetBase_eventSetNowSpeaker_Parms), Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventMessageWindowWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase, nullptr, "SetupText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MessageKey;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eMessageCast_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eMessageCast;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eExtraInfo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eExtraInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::NewProp_MessageKey = { "MessageKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventMessageWindowWidgetBase_eventSetupTextCutscene_Parms, MessageKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::NewProp_eMessageCast_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::NewProp_eMessageCast = { "eMessageCast", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventMessageWindowWidgetBase_eventSetupTextCutscene_Parms, eMessageCast), Z_Construct_UEnum_ABP_200508_ECareerCutsceneMessageCastType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::NewProp_eExtraInfo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::NewProp_eExtraInfo = { "eExtraInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerEventMessageWindowWidgetBase_eventSetupTextCutscene_Parms, eExtraInfo), Z_Construct_UEnum_ABP_200508_ECareerCutsceneExtraInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::NewProp_MessageKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::NewProp_eMessageCast_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::NewProp_eMessageCast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::NewProp_eExtraInfo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::NewProp_eExtraInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerEventMessageWindowWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase, nullptr, "SetupTextCutscene", nullptr, nullptr, sizeof(ELCareerEventMessageWindowWidgetBase_eventSetupTextCutscene_Parms), Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_NoRegister()
	{
		return UELCareerEventMessageWindowWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_CloseMenuCutscene, "CloseMenuCutscene" }, // 4206131940
		{ &Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCanDecision, "IsCanDecision" }, // 1703443100
		{ &Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_IsCutOffMessage, "IsCutOffMessage" }, // 3816512240
		{ &Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_OpenMenuCutscene, "OpenMenuCutscene" }, // 3732232744
		{ &Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetNowSpeaker, "SetNowSpeaker" }, // 3606730733
		{ &Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupText, "SetupText" }, // 4205867421
		{ &Z_Construct_UFunction_UELCareerEventMessageWindowWidgetBase_SetupTextCutscene, "SetupTextCutscene" }, // 2001380536
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerEventMessageWindowWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerEventMessageWindowWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerEventMessageWindowWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics::ClassParams = {
		&UELCareerEventMessageWindowWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerEventMessageWindowWidgetBase, 3609580422);
	template<> ABP_200508_API UClass* StaticClass<UELCareerEventMessageWindowWidgetBase>()
	{
		return UELCareerEventMessageWindowWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerEventMessageWindowWidgetBase(Z_Construct_UClass_UELCareerEventMessageWindowWidgetBase, &UELCareerEventMessageWindowWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerEventMessageWindowWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerEventMessageWindowWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
