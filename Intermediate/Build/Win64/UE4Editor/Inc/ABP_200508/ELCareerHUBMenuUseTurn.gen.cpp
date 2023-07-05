// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerHUBMenuUseTurn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerHUBMenuUseTurn() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerHUBMenuUseTurn_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerHUBMenuUseTurn();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerHubMenuDefaultTabBottomHelp();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventMark();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerHUBMenuGotoLogo();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerHUBMenuUseTurn::execGetEventMark)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__PostCommandType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__StoryCardNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerPostCommandEventMark*)Z_Param__Result=P_THIS->GetEventMark(ECareerPostCommandEventType(Z_Param__PostCommandType),Z_Param_Out__StoryCardNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuUseTurn::execGetGotoLogo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerHUBMenuGotoLogo*)Z_Param__Result=P_THIS->GetGotoLogo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuUseTurn::execGetPostCommandEventNumber)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__PostCommandType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPostCommandEventNumber(ECareerPostCommandEventType(Z_Param__PostCommandType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuUseTurn::execIsEvent)
	{
		P_GET_ENUM(ECareerPostCommandEventType,Z_Param__PostCommandType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__StoryCardNumber);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEvent(ECareerPostCommandEventType(Z_Param__PostCommandType),Z_Param_Out__StoryCardNumber);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuUseTurn::execIsMenuTop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMenuTop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerHUBMenuUseTurn::execSetMenuTopState)
	{
		P_GET_UBOOL(Z_Param_IsTop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMenuTopState(Z_Param_IsTop);
		P_NATIVE_END;
	}
	static FName NAME_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp = FName(TEXT("DefaultTabBottomHelp"));
	void UELCareerHUBMenuUseTurn::DefaultTabBottomHelp(ECareerHubMenuDefaultTabBottomHelp eDefaultTabBottomHelp)
	{
		ELCareerHUBMenuUseTurn_eventDefaultTabBottomHelp_Parms Parms;
		Parms.eDefaultTabBottomHelp=eDefaultTabBottomHelp;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp),&Parms);
	}
	static FName NAME_UELCareerHUBMenuUseTurn_GotoDynamiteOutAnimation = FName(TEXT("GotoDynamiteOutAnimation"));
	void UELCareerHUBMenuUseTurn::GotoDynamiteOutAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuUseTurn_GotoDynamiteOutAnimation),NULL);
	}
	static FName NAME_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit = FName(TEXT("OnChangeSaveAndExit"));
	void UELCareerHUBMenuUseTurn::OnChangeSaveAndExit(bool bFlag)
	{
		ELCareerHUBMenuUseTurn_eventOnChangeSaveAndExit_Parms Parms;
		Parms.bFlag=bFlag ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit),&Parms);
	}
	static FName NAME_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor = FName(TEXT("OnMoveCareerMenuItemCursor"));
	void UELCareerHUBMenuUseTurn::OnMoveCareerMenuItemCursor(int32 _move)
	{
		ELCareerHUBMenuUseTurn_eventOnMoveCareerMenuItemCursor_Parms Parms;
		Parms._move=_move;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor),&Parms);
	}
	static FName NAME_UELCareerHUBMenuUseTurn_OnPressedMoveTab = FName(TEXT("OnPressedMoveTab"));
	void UELCareerHUBMenuUseTurn::OnPressedMoveTab(bool _isLeft)
	{
		ELCareerHUBMenuUseTurn_eventOnPressedMoveTab_Parms Parms;
		Parms._isLeft=_isLeft ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELCareerHUBMenuUseTurn_OnPressedMoveTab),&Parms);
	}
	void UELCareerHUBMenuUseTurn::StaticRegisterNativesUELCareerHUBMenuUseTurn()
	{
		UClass* Class = UELCareerHUBMenuUseTurn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEventMark", &UELCareerHUBMenuUseTurn::execGetEventMark },
			{ "GetGotoLogo", &UELCareerHUBMenuUseTurn::execGetGotoLogo },
			{ "GetPostCommandEventNumber", &UELCareerHUBMenuUseTurn::execGetPostCommandEventNumber },
			{ "IsEvent", &UELCareerHUBMenuUseTurn::execIsEvent },
			{ "IsMenuTop", &UELCareerHUBMenuUseTurn::execIsMenuTop },
			{ "SetMenuTopState", &UELCareerHUBMenuUseTurn::execSetMenuTopState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eDefaultTabBottomHelp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eDefaultTabBottomHelp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp = { "eDefaultTabBottomHelp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuUseTurn_eventDefaultTabBottomHelp_Parms, eDefaultTabBottomHelp), Z_Construct_UEnum_ABP_200508_ECareerHubMenuDefaultTabBottomHelp, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::NewProp_eDefaultTabBottomHelp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "DefaultTabBottomHelp", nullptr, nullptr, sizeof(ELCareerHUBMenuUseTurn_eventDefaultTabBottomHelp_Parms), Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics
	{
		struct ELCareerHUBMenuUseTurn_eventGetEventMark_Parms
		{
			ECareerPostCommandEventType _PostCommandType;
			int32 _StoryCardNumber;
			ECareerPostCommandEventMark ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__PostCommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__PostCommandType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__StoryCardNumber;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::NewProp__PostCommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::NewProp__PostCommandType = { "_PostCommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuUseTurn_eventGetEventMark_Parms, _PostCommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::NewProp__StoryCardNumber = { "_StoryCardNumber", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuUseTurn_eventGetEventMark_Parms, _StoryCardNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuUseTurn_eventGetEventMark_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventMark, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::NewProp__PostCommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::NewProp__PostCommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::NewProp__StoryCardNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "GetEventMark", nullptr, nullptr, sizeof(ELCareerHUBMenuUseTurn_eventGetEventMark_Parms), Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics
	{
		struct ELCareerHUBMenuUseTurn_eventGetGotoLogo_Parms
		{
			ECareerHUBMenuGotoLogo ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuUseTurn_eventGetGotoLogo_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerHUBMenuGotoLogo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "GetGotoLogo", nullptr, nullptr, sizeof(ELCareerHUBMenuUseTurn_eventGetGotoLogo_Parms), Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics
	{
		struct ELCareerHUBMenuUseTurn_eventGetPostCommandEventNumber_Parms
		{
			ECareerPostCommandEventType _PostCommandType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__PostCommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__PostCommandType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::NewProp__PostCommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::NewProp__PostCommandType = { "_PostCommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuUseTurn_eventGetPostCommandEventNumber_Parms, _PostCommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuUseTurn_eventGetPostCommandEventNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::NewProp__PostCommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::NewProp__PostCommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "GetPostCommandEventNumber", nullptr, nullptr, sizeof(ELCareerHUBMenuUseTurn_eventGetPostCommandEventNumber_Parms), Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GotoDynamiteOutAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GotoDynamiteOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GotoDynamiteOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "GotoDynamiteOutAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GotoDynamiteOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GotoDynamiteOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GotoDynamiteOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GotoDynamiteOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics
	{
		struct ELCareerHUBMenuUseTurn_eventIsEvent_Parms
		{
			ECareerPostCommandEventType _PostCommandType;
			int32 _StoryCardNumber;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__PostCommandType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__PostCommandType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__StoryCardNumber;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::NewProp__PostCommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::NewProp__PostCommandType = { "_PostCommandType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuUseTurn_eventIsEvent_Parms, _PostCommandType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::NewProp__StoryCardNumber = { "_StoryCardNumber", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuUseTurn_eventIsEvent_Parms, _StoryCardNumber), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerHUBMenuUseTurn_eventIsEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuUseTurn_eventIsEvent_Parms), &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::NewProp__PostCommandType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::NewProp__PostCommandType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::NewProp__StoryCardNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "IsEvent", nullptr, nullptr, sizeof(ELCareerHUBMenuUseTurn_eventIsEvent_Parms), Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics
	{
		struct ELCareerHUBMenuUseTurn_eventIsMenuTop_Parms
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
	void Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerHUBMenuUseTurn_eventIsMenuTop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuUseTurn_eventIsMenuTop_Parms), &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "IsMenuTop", nullptr, nullptr, sizeof(ELCareerHUBMenuUseTurn_eventIsMenuTop_Parms), Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics
	{
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerHUBMenuUseTurn_eventOnChangeSaveAndExit_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuUseTurn_eventOnChangeSaveAndExit_Parms), &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "OnChangeSaveAndExit", nullptr, nullptr, sizeof(ELCareerHUBMenuUseTurn_eventOnChangeSaveAndExit_Parms), Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__move;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics::NewProp__move = { "_move", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerHUBMenuUseTurn_eventOnMoveCareerMenuItemCursor_Parms, _move), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics::NewProp__move,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "OnMoveCareerMenuItemCursor", nullptr, nullptr, sizeof(ELCareerHUBMenuUseTurn_eventOnMoveCareerMenuItemCursor_Parms), Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics
	{
		static void NewProp__isLeft_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit(void* Obj)
	{
		((ELCareerHUBMenuUseTurn_eventOnPressedMoveTab_Parms*)Obj)->_isLeft = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::NewProp__isLeft = { "_isLeft", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuUseTurn_eventOnPressedMoveTab_Parms), &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::NewProp__isLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::NewProp__isLeft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "OnPressedMoveTab", nullptr, nullptr, sizeof(ELCareerHUBMenuUseTurn_eventOnPressedMoveTab_Parms), Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics
	{
		struct ELCareerHUBMenuUseTurn_eventSetMenuTopState_Parms
		{
			bool IsTop;
		};
		static void NewProp_IsTop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::NewProp_IsTop_SetBit(void* Obj)
	{
		((ELCareerHUBMenuUseTurn_eventSetMenuTopState_Parms*)Obj)->IsTop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::NewProp_IsTop = { "IsTop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerHUBMenuUseTurn_eventSetMenuTopState_Parms), &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::NewProp_IsTop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::NewProp_IsTop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerHUBMenuUseTurn, nullptr, "SetMenuTopState", nullptr, nullptr, sizeof(ELCareerHUBMenuUseTurn_eventSetMenuTopState_Parms), Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerHUBMenuUseTurn_NoRegister()
	{
		return UELCareerHUBMenuUseTurn::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_DefaultTabBottomHelp, "DefaultTabBottomHelp" }, // 3457435879
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetEventMark, "GetEventMark" }, // 2308135124
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetGotoLogo, "GetGotoLogo" }, // 543387056
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GetPostCommandEventNumber, "GetPostCommandEventNumber" }, // 3614447696
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_GotoDynamiteOutAnimation, "GotoDynamiteOutAnimation" }, // 2033503278
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsEvent, "IsEvent" }, // 3482715632
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_IsMenuTop, "IsMenuTop" }, // 732582189
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnChangeSaveAndExit, "OnChangeSaveAndExit" }, // 3424644147
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnMoveCareerMenuItemCursor, "OnMoveCareerMenuItemCursor" }, // 3326509374
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_OnPressedMoveTab, "OnPressedMoveTab" }, // 4185193430
		{ &Z_Construct_UFunction_UELCareerHUBMenuUseTurn_SetMenuTopState, "SetMenuTopState" }, // 1639267001
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerHUBMenuUseTurn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerHUBMenuUseTurn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerHUBMenuUseTurn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics::ClassParams = {
		&UELCareerHUBMenuUseTurn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerHUBMenuUseTurn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerHUBMenuUseTurn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerHUBMenuUseTurn, 2367733748);
	template<> ABP_200508_API UClass* StaticClass<UELCareerHUBMenuUseTurn>()
	{
		return UELCareerHUBMenuUseTurn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerHUBMenuUseTurn(Z_Construct_UClass_UELCareerHUBMenuUseTurn, &UELCareerHUBMenuUseTurn::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerHUBMenuUseTurn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerHUBMenuUseTurn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
