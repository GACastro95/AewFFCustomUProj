// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PGameFlowPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PGameFlowPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PGameFlowPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PGameFlowPacket::execAccept)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enGameFlowStep);
		P_GET_UBOOL(Z_Param__bAccepted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Accept(EEOSSessionP2PAFGameFlowStep(Z_Param__enGameFlowStep),Z_Param__bAccepted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PGameFlowPacket::execChange)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enGameFlowStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Change(EEOSSessionP2PAFGameFlowStep(Z_Param__enGameFlowStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PGameFlowPacket::execGet)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enGameFlowStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Get(EEOSSessionP2PAFGameFlowStep(Z_Param__enGameFlowStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PGameFlowPacket::execIsAutoChangeGameFlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAutoChangeGameFlow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PGameFlowPacket::execIsPossibleToChange)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enGameFlowStep);
		P_GET_UBOOL(Z_Param__bAutoChangeGameFlow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPossibleToChange(EEOSSessionP2PAFGameFlowStep(Z_Param__enGameFlowStep),Z_Param__bAutoChangeGameFlow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PGameFlowPacket::execNotify)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enGameFlowStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Notify(EEOSSessionP2PAFGameFlowStep(Z_Param__enGameFlowStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PGameFlowPacket::execSetResultForChange)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enGameFlowStep);
		P_GET_UBOOL(Z_Param__bResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetResultForChange(EEOSSessionP2PAFGameFlowStep(Z_Param__enGameFlowStep),Z_Param__bResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PGameFlowPacket::execSetResultForPossibleToChange)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enGameFlowStep);
		P_GET_UBOOL(Z_Param__bResult);
		P_GET_UBOOL(Z_Param__bAutoChangeGameFlow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetResultForPossibleToChange(EEOSSessionP2PAFGameFlowStep(Z_Param__enGameFlowStep),Z_Param__bResult,Z_Param__bAutoChangeGameFlow);
		P_NATIVE_END;
	}
	void UEOSSessionP2PGameFlowPacket::StaticRegisterNativesUEOSSessionP2PGameFlowPacket()
	{
		UClass* Class = UEOSSessionP2PGameFlowPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Accept", &UEOSSessionP2PGameFlowPacket::execAccept },
			{ "Change", &UEOSSessionP2PGameFlowPacket::execChange },
			{ "Get", &UEOSSessionP2PGameFlowPacket::execGet },
			{ "IsAutoChangeGameFlow", &UEOSSessionP2PGameFlowPacket::execIsAutoChangeGameFlow },
			{ "IsPossibleToChange", &UEOSSessionP2PGameFlowPacket::execIsPossibleToChange },
			{ "Notify", &UEOSSessionP2PGameFlowPacket::execNotify },
			{ "SetResultForChange", &UEOSSessionP2PGameFlowPacket::execSetResultForChange },
			{ "SetResultForPossibleToChange", &UEOSSessionP2PGameFlowPacket::execSetResultForPossibleToChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics
	{
		struct EOSSessionP2PGameFlowPacket_eventAccept_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enGameFlowStep;
			bool _bAccepted;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enGameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enGameFlowStep;
		static void NewProp__bAccepted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAccepted;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp__enGameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp__enGameFlowStep = { "_enGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGameFlowPacket_eventAccept_Parms, _enGameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp__bAccepted_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventAccept_Parms*)Obj)->_bAccepted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp__bAccepted = { "_bAccepted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventAccept_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp__bAccepted_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventAccept_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventAccept_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp__enGameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp__enGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp__bAccepted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameFlowPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameFlowPacket, nullptr, "Accept", nullptr, nullptr, sizeof(EOSSessionP2PGameFlowPacket_eventAccept_Parms), Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics
	{
		struct EOSSessionP2PGameFlowPacket_eventChange_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enGameFlowStep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enGameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enGameFlowStep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::NewProp__enGameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::NewProp__enGameFlowStep = { "_enGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGameFlowPacket_eventChange_Parms, _enGameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventChange_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::NewProp__enGameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::NewProp__enGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameFlowPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameFlowPacket, nullptr, "Change", nullptr, nullptr, sizeof(EOSSessionP2PGameFlowPacket_eventChange_Parms), Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics
	{
		struct EOSSessionP2PGameFlowPacket_eventGet_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enGameFlowStep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enGameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enGameFlowStep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::NewProp__enGameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::NewProp__enGameFlowStep = { "_enGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGameFlowPacket_eventGet_Parms, _enGameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventGet_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventGet_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::NewProp__enGameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::NewProp__enGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameFlowPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameFlowPacket, nullptr, "Get", nullptr, nullptr, sizeof(EOSSessionP2PGameFlowPacket_eventGet_Parms), Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics
	{
		struct EOSSessionP2PGameFlowPacket_eventIsAutoChangeGameFlow_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventIsAutoChangeGameFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventIsAutoChangeGameFlow_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameFlowPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameFlowPacket, nullptr, "IsAutoChangeGameFlow", nullptr, nullptr, sizeof(EOSSessionP2PGameFlowPacket_eventIsAutoChangeGameFlow_Parms), Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics
	{
		struct EOSSessionP2PGameFlowPacket_eventIsPossibleToChange_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enGameFlowStep;
			bool _bAutoChangeGameFlow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enGameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enGameFlowStep;
		static void NewProp__bAutoChangeGameFlow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAutoChangeGameFlow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp__enGameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp__enGameFlowStep = { "_enGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGameFlowPacket_eventIsPossibleToChange_Parms, _enGameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp__bAutoChangeGameFlow_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventIsPossibleToChange_Parms*)Obj)->_bAutoChangeGameFlow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp__bAutoChangeGameFlow = { "_bAutoChangeGameFlow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventIsPossibleToChange_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp__bAutoChangeGameFlow_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventIsPossibleToChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventIsPossibleToChange_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp__enGameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp__enGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp__bAutoChangeGameFlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameFlowPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameFlowPacket, nullptr, "IsPossibleToChange", nullptr, nullptr, sizeof(EOSSessionP2PGameFlowPacket_eventIsPossibleToChange_Parms), Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics
	{
		struct EOSSessionP2PGameFlowPacket_eventNotify_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enGameFlowStep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enGameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enGameFlowStep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::NewProp__enGameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::NewProp__enGameFlowStep = { "_enGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGameFlowPacket_eventNotify_Parms, _enGameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventNotify_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventNotify_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::NewProp__enGameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::NewProp__enGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameFlowPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameFlowPacket, nullptr, "Notify", nullptr, nullptr, sizeof(EOSSessionP2PGameFlowPacket_eventNotify_Parms), Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics
	{
		struct EOSSessionP2PGameFlowPacket_eventSetResultForChange_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enGameFlowStep;
			bool _bResult;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enGameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enGameFlowStep;
		static void NewProp__bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bResult;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp__enGameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp__enGameFlowStep = { "_enGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGameFlowPacket_eventSetResultForChange_Parms, _enGameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp__bResult_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventSetResultForChange_Parms*)Obj)->_bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp__bResult = { "_bResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventSetResultForChange_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp__bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventSetResultForChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventSetResultForChange_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp__enGameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp__enGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp__bResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameFlowPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameFlowPacket, nullptr, "SetResultForChange", nullptr, nullptr, sizeof(EOSSessionP2PGameFlowPacket_eventSetResultForChange_Parms), Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics
	{
		struct EOSSessionP2PGameFlowPacket_eventSetResultForPossibleToChange_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enGameFlowStep;
			bool _bResult;
			bool _bAutoChangeGameFlow;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enGameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enGameFlowStep;
		static void NewProp__bResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bResult;
		static void NewProp__bAutoChangeGameFlow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAutoChangeGameFlow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__enGameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__enGameFlowStep = { "_enGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PGameFlowPacket_eventSetResultForPossibleToChange_Parms, _enGameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__bResult_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventSetResultForPossibleToChange_Parms*)Obj)->_bResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__bResult = { "_bResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventSetResultForPossibleToChange_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__bResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__bAutoChangeGameFlow_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventSetResultForPossibleToChange_Parms*)Obj)->_bAutoChangeGameFlow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__bAutoChangeGameFlow = { "_bAutoChangeGameFlow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventSetResultForPossibleToChange_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__bAutoChangeGameFlow_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PGameFlowPacket_eventSetResultForPossibleToChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PGameFlowPacket_eventSetResultForPossibleToChange_Parms), &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__enGameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__enGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__bResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp__bAutoChangeGameFlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameFlowPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PGameFlowPacket, nullptr, "SetResultForPossibleToChange", nullptr, nullptr, sizeof(EOSSessionP2PGameFlowPacket_eventSetResultForPossibleToChange_Parms), Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_NoRegister()
	{
		return UEOSSessionP2PGameFlowPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Accept, "Accept" }, // 1620494678
		{ &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Change, "Change" }, // 561201238
		{ &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Get, "Get" }, // 1721495206
		{ &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsAutoChangeGameFlow, "IsAutoChangeGameFlow" }, // 3276664214
		{ &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_IsPossibleToChange, "IsPossibleToChange" }, // 2104818171
		{ &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_Notify, "Notify" }, // 4070822855
		{ &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForChange, "SetResultForChange" }, // 3299527854
		{ &Z_Construct_UFunction_UEOSSessionP2PGameFlowPacket_SetResultForPossibleToChange, "SetResultForPossibleToChange" }, // 1249707457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PGameFlowPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PGameFlowPacket.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PGameFlowPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_Statics::ClassParams = {
		&UEOSSessionP2PGameFlowPacket::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PGameFlowPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PGameFlowPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PGameFlowPacket, 1792570697);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PGameFlowPacket>()
	{
		return UEOSSessionP2PGameFlowPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PGameFlowPacket(Z_Construct_UClass_UEOSSessionP2PGameFlowPacket, &UEOSSessionP2PGameFlowPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PGameFlowPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PGameFlowPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
