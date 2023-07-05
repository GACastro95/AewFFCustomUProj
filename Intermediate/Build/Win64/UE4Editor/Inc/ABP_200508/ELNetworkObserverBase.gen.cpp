// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetworkObserverBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetworkObserverBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELNetworkObserverBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetworkObserverBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELApplicationStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkType();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ApplicationStatusChanged__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_NetworkStatusChanged__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_NetworkTypeChanged__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_NetworkConnectionStatusChanged__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELNetworkObserverBase::execDebug_SetDisableEOS)
	{
		P_GET_UBOOL(Z_Param_Disable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Debug_SetDisableEOS(Z_Param_Disable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkObserverBase::execDebug_SetDisableNetwork)
	{
		P_GET_UBOOL(Z_Param_Disable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Debug_SetDisableNetwork(Z_Param_Disable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkObserverBase::execDebug_SetDisableYGS2)
	{
		P_GET_UBOOL(Z_Param_Disable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Debug_SetDisableYGS2(Z_Param_Disable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkObserverBase::execGetAppStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELApplicationStatus*)Z_Param__Result=P_THIS->GetAppStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkObserverBase::execGetNetStatus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELNetworkStatus*)Z_Param__Result=P_THIS->GetNetStatus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkObserverBase::execGetNetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELNetworkType*)Z_Param__Result=P_THIS->GetNetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetworkObserverBase::execSetNetworkEquipment)
	{
		P_GET_ENUM(EELNetworkStatus,Z_Param_NetworkStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNetworkEquipment(EELNetworkStatus(Z_Param_NetworkStatus));
		P_NATIVE_END;
	}
	void UELNetworkObserverBase::StaticRegisterNativesUELNetworkObserverBase()
	{
		UClass* Class = UELNetworkObserverBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Debug_SetDisableEOS", &UELNetworkObserverBase::execDebug_SetDisableEOS },
			{ "Debug_SetDisableNetwork", &UELNetworkObserverBase::execDebug_SetDisableNetwork },
			{ "Debug_SetDisableYGS2", &UELNetworkObserverBase::execDebug_SetDisableYGS2 },
			{ "GetAppStatus", &UELNetworkObserverBase::execGetAppStatus },
			{ "GetNetStatus", &UELNetworkObserverBase::execGetNetStatus },
			{ "GetNetType", &UELNetworkObserverBase::execGetNetType },
			{ "SetNetworkEquipment", &UELNetworkObserverBase::execSetNetworkEquipment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics
	{
		struct ELNetworkObserverBase_eventDebug_SetDisableEOS_Parms
		{
			bool Disable;
		};
		static void NewProp_Disable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::NewProp_Disable_SetBit(void* Obj)
	{
		((ELNetworkObserverBase_eventDebug_SetDisableEOS_Parms*)Obj)->Disable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::NewProp_Disable = { "Disable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetworkObserverBase_eventDebug_SetDisableEOS_Parms), &Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::NewProp_Disable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::NewProp_Disable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverBase, nullptr, "Debug_SetDisableEOS", nullptr, nullptr, sizeof(ELNetworkObserverBase_eventDebug_SetDisableEOS_Parms), Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics
	{
		struct ELNetworkObserverBase_eventDebug_SetDisableNetwork_Parms
		{
			bool Disable;
		};
		static void NewProp_Disable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::NewProp_Disable_SetBit(void* Obj)
	{
		((ELNetworkObserverBase_eventDebug_SetDisableNetwork_Parms*)Obj)->Disable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::NewProp_Disable = { "Disable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetworkObserverBase_eventDebug_SetDisableNetwork_Parms), &Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::NewProp_Disable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::NewProp_Disable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverBase, nullptr, "Debug_SetDisableNetwork", nullptr, nullptr, sizeof(ELNetworkObserverBase_eventDebug_SetDisableNetwork_Parms), Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics
	{
		struct ELNetworkObserverBase_eventDebug_SetDisableYGS2_Parms
		{
			bool Disable;
		};
		static void NewProp_Disable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::NewProp_Disable_SetBit(void* Obj)
	{
		((ELNetworkObserverBase_eventDebug_SetDisableYGS2_Parms*)Obj)->Disable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::NewProp_Disable = { "Disable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetworkObserverBase_eventDebug_SetDisableYGS2_Parms), &Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::NewProp_Disable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::NewProp_Disable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverBase, nullptr, "Debug_SetDisableYGS2", nullptr, nullptr, sizeof(ELNetworkObserverBase_eventDebug_SetDisableYGS2_Parms), Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics
	{
		struct ELNetworkObserverBase_eventGetAppStatus_Parms
		{
			EELApplicationStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkObserverBase_eventGetAppStatus_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EELApplicationStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverBase, nullptr, "GetAppStatus", nullptr, nullptr, sizeof(ELNetworkObserverBase_eventGetAppStatus_Parms), Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics
	{
		struct ELNetworkObserverBase_eventGetNetStatus_Parms
		{
			EELNetworkStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkObserverBase_eventGetNetStatus_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EELNetworkStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverBase, nullptr, "GetNetStatus", nullptr, nullptr, sizeof(ELNetworkObserverBase_eventGetNetStatus_Parms), Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics
	{
		struct ELNetworkObserverBase_eventGetNetType_Parms
		{
			EELNetworkType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkObserverBase_eventGetNetType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EELNetworkType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverBase, nullptr, "GetNetType", nullptr, nullptr, sizeof(ELNetworkObserverBase_eventGetNetType_Parms), Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverBase_GetNetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverBase_GetNetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics
	{
		struct ELNetworkObserverBase_eventSetNetworkEquipment_Parms
		{
			EELNetworkStatus NetworkStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetworkStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NetworkStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::NewProp_NetworkStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::NewProp_NetworkStatus = { "NetworkStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetworkObserverBase_eventSetNetworkEquipment_Parms, NetworkStatus), Z_Construct_UEnum_ABP_200508_EELNetworkStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::NewProp_NetworkStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::NewProp_NetworkStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetworkObserverBase, nullptr, "SetNetworkEquipment", nullptr, nullptr, sizeof(ELNetworkObserverBase_eventSetNetworkEquipment_Parms), Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELNetworkObserverBase_NoRegister()
	{
		return UELNetworkObserverBase::StaticClass();
	}
	struct Z_Construct_UClass_UELNetworkObserverBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationStatusChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationStatusChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkStatusChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_NetworkStatusChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkTypeChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_NetworkTypeChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkConnectionStatusChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_NetworkConnectionStatusChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELNetworkObserverBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELNetworkObserverBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableEOS, "Debug_SetDisableEOS" }, // 4145272324
		{ &Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableNetwork, "Debug_SetDisableNetwork" }, // 3236595389
		{ &Z_Construct_UFunction_UELNetworkObserverBase_Debug_SetDisableYGS2, "Debug_SetDisableYGS2" }, // 1929270653
		{ &Z_Construct_UFunction_UELNetworkObserverBase_GetAppStatus, "GetAppStatus" }, // 2493025386
		{ &Z_Construct_UFunction_UELNetworkObserverBase_GetNetStatus, "GetNetStatus" }, // 3076274385
		{ &Z_Construct_UFunction_UELNetworkObserverBase_GetNetType, "GetNetType" }, // 234403100
		{ &Z_Construct_UFunction_UELNetworkObserverBase_SetNetworkEquipment, "SetNetworkEquipment" }, // 2347346420
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetworkObserverBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELNetworkObserverBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_ApplicationStatusChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetworkObserverBase" },
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_ApplicationStatusChanged = { "ApplicationStatusChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetworkObserverBase, ApplicationStatusChanged), Z_Construct_UDelegateFunction_ABP_200508_ApplicationStatusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_ApplicationStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_ApplicationStatusChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkStatusChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetworkObserverBase" },
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkStatusChanged = { "NetworkStatusChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetworkObserverBase, NetworkStatusChanged), Z_Construct_UDelegateFunction_ABP_200508_NetworkStatusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkStatusChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkTypeChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetworkObserverBase" },
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkTypeChanged = { "NetworkTypeChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetworkObserverBase, NetworkTypeChanged), Z_Construct_UDelegateFunction_ABP_200508_NetworkTypeChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkTypeChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkTypeChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkConnectionStatusChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetworkObserverBase" },
		{ "ModuleRelativePath", "Public/ELNetworkObserverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkConnectionStatusChanged = { "NetworkConnectionStatusChanged", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetworkObserverBase, NetworkConnectionStatusChanged), Z_Construct_UDelegateFunction_ABP_200508_NetworkConnectionStatusChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkConnectionStatusChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkConnectionStatusChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELNetworkObserverBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_ApplicationStatusChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkStatusChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkTypeChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetworkObserverBase_Statics::NewProp_NetworkConnectionStatusChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELNetworkObserverBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELNetworkObserverBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELNetworkObserverBase_Statics::ClassParams = {
		&UELNetworkObserverBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELNetworkObserverBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELNetworkObserverBase_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELNetworkObserverBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetworkObserverBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELNetworkObserverBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELNetworkObserverBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELNetworkObserverBase, 1805807162);
	template<> ABP_200508_API UClass* StaticClass<UELNetworkObserverBase>()
	{
		return UELNetworkObserverBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELNetworkObserverBase(Z_Construct_UClass_UELNetworkObserverBase, &UELNetworkObserverBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELNetworkObserverBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELNetworkObserverBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
