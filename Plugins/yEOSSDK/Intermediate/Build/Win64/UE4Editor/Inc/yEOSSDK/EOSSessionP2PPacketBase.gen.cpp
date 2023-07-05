// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PPacketBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PPacketBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketDirectionType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTypeBP();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PPacketBase::execCopyPacketData)
	{
		P_GET_OBJECT(UEOSSessionP2PPacketBase,Z_Param__pcPacketBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CopyPacketData(Z_Param__pcPacketBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PPacketBase::execGetDiectionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionPacketDirectionType*)Z_Param__Result=P_THIS->GetDiectionType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PPacketBase::execGetPacketTypeBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionPacketTypeBP*)Z_Param__Result=P_THIS->GetPacketTypeBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PPacketBase::execIsAllowDelayedDelivery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAllowDelayedDelivery();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PPacketBase::execIsSynchronizedPacket)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSynchronizedPacket();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PPacketBase::execIsUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PPacketBase::execSetDiectionType)
	{
		P_GET_ENUM(EEOSSessionPacketDirectionType,Z_Param__enDirectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDiectionType(EEOSSessionPacketDirectionType(Z_Param__enDirectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PPacketBase::execUnsetUpdateFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnsetUpdateFlag();
		P_NATIVE_END;
	}
	void UEOSSessionP2PPacketBase::StaticRegisterNativesUEOSSessionP2PPacketBase()
	{
		UClass* Class = UEOSSessionP2PPacketBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyPacketData", &UEOSSessionP2PPacketBase::execCopyPacketData },
			{ "GetDiectionType", &UEOSSessionP2PPacketBase::execGetDiectionType },
			{ "GetPacketTypeBP", &UEOSSessionP2PPacketBase::execGetPacketTypeBP },
			{ "IsAllowDelayedDelivery", &UEOSSessionP2PPacketBase::execIsAllowDelayedDelivery },
			{ "IsSynchronizedPacket", &UEOSSessionP2PPacketBase::execIsSynchronizedPacket },
			{ "IsUpdate", &UEOSSessionP2PPacketBase::execIsUpdate },
			{ "SetDiectionType", &UEOSSessionP2PPacketBase::execSetDiectionType },
			{ "UnsetUpdateFlag", &UEOSSessionP2PPacketBase::execUnsetUpdateFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics
	{
		struct EOSSessionP2PPacketBase_eventCopyPacketData_Parms
		{
			UEOSSessionP2PPacketBase* _pcPacketBase;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcPacketBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::NewProp__pcPacketBase = { "_pcPacketBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PPacketBase_eventCopyPacketData_Parms, _pcPacketBase), Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PPacketBase_eventCopyPacketData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PPacketBase_eventCopyPacketData_Parms), &Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::NewProp__pcPacketBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PPacketBase, nullptr, "CopyPacketData", nullptr, nullptr, sizeof(EOSSessionP2PPacketBase_eventCopyPacketData_Parms), Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics
	{
		struct EOSSessionP2PPacketBase_eventGetDiectionType_Parms
		{
			EEOSSessionPacketDirectionType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PPacketBase_eventGetDiectionType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketDirectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PPacketBase, nullptr, "GetDiectionType", nullptr, nullptr, sizeof(EOSSessionP2PPacketBase_eventGetDiectionType_Parms), Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics
	{
		struct EOSSessionP2PPacketBase_eventGetPacketTypeBP_Parms
		{
			EEOSSessionPacketTypeBP ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PPacketBase_eventGetPacketTypeBP_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketTypeBP, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PPacketBase, nullptr, "GetPacketTypeBP", nullptr, nullptr, sizeof(EOSSessionP2PPacketBase_eventGetPacketTypeBP_Parms), Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics
	{
		struct EOSSessionP2PPacketBase_eventIsAllowDelayedDelivery_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PPacketBase_eventIsAllowDelayedDelivery_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PPacketBase_eventIsAllowDelayedDelivery_Parms), &Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PPacketBase, nullptr, "IsAllowDelayedDelivery", nullptr, nullptr, sizeof(EOSSessionP2PPacketBase_eventIsAllowDelayedDelivery_Parms), Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics
	{
		struct EOSSessionP2PPacketBase_eventIsSynchronizedPacket_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PPacketBase_eventIsSynchronizedPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PPacketBase_eventIsSynchronizedPacket_Parms), &Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PPacketBase, nullptr, "IsSynchronizedPacket", nullptr, nullptr, sizeof(EOSSessionP2PPacketBase_eventIsSynchronizedPacket_Parms), Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics
	{
		struct EOSSessionP2PPacketBase_eventIsUpdate_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PPacketBase_eventIsUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PPacketBase_eventIsUpdate_Parms), &Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PPacketBase, nullptr, "IsUpdate", nullptr, nullptr, sizeof(EOSSessionP2PPacketBase_eventIsUpdate_Parms), Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics
	{
		struct EOSSessionP2PPacketBase_eventSetDiectionType_Parms
		{
			EEOSSessionPacketDirectionType _enDirectionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enDirectionType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enDirectionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::NewProp__enDirectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::NewProp__enDirectionType = { "_enDirectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PPacketBase_eventSetDiectionType_Parms, _enDirectionType), Z_Construct_UEnum_yEOSSDK_EEOSSessionPacketDirectionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::NewProp__enDirectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::NewProp__enDirectionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PPacketBase, nullptr, "SetDiectionType", nullptr, nullptr, sizeof(EOSSessionP2PPacketBase_eventSetDiectionType_Parms), Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics
	{
		struct EOSSessionP2PPacketBase_eventUnsetUpdateFlag_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PPacketBase_eventUnsetUpdateFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PPacketBase_eventUnsetUpdateFlag_Parms), &Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PPacketBase, nullptr, "UnsetUpdateFlag", nullptr, nullptr, sizeof(EOSSessionP2PPacketBase_eventUnsetUpdateFlag_Parms), Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase_NoRegister()
	{
		return UEOSSessionP2PPacketBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PPacketBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PPacketBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSLockebleCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PPacketBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PPacketBase_CopyPacketData, "CopyPacketData" }, // 1741233137
		{ &Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetDiectionType, "GetDiectionType" }, // 431881355
		{ &Z_Construct_UFunction_UEOSSessionP2PPacketBase_GetPacketTypeBP, "GetPacketTypeBP" }, // 3672306103
		{ &Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsAllowDelayedDelivery, "IsAllowDelayedDelivery" }, // 1568776298
		{ &Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsSynchronizedPacket, "IsSynchronizedPacket" }, // 2067510091
		{ &Z_Construct_UFunction_UEOSSessionP2PPacketBase_IsUpdate, "IsUpdate" }, // 716194428
		{ &Z_Construct_UFunction_UEOSSessionP2PPacketBase_SetDiectionType, "SetDiectionType" }, // 1501232954
		{ &Z_Construct_UFunction_UEOSSessionP2PPacketBase_UnsetUpdateFlag, "UnsetUpdateFlag" }, // 162809685
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PPacketBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PPacketBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PPacketBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PPacketBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PPacketBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PPacketBase_Statics::ClassParams = {
		&UEOSSessionP2PPacketBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PPacketBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PPacketBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PPacketBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PPacketBase, 3216090418);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PPacketBase>()
	{
		return UEOSSessionP2PPacketBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PPacketBase(Z_Construct_UClass_UEOSSessionP2PPacketBase, &UEOSSessionP2PPacketBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PPacketBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PPacketBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
