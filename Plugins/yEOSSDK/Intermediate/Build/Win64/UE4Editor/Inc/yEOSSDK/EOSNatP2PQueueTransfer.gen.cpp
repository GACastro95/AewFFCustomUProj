// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PQueueTransfer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PQueueTransfer() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PQueueTransfer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PQueueTransfer();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PPacketBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSP2PPacketQueue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSNatP2PQueueTransfer::execAddToSendPacketQueue)
	{
		P_GET_OBJECT(UEOSNatP2PPacketBase,Z_Param__pcData);
		P_GET_UBOOL(Z_Param__bAllUser);
		P_GET_ENUM(EEOSPacketReliability,Z_Param__enReliability);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddToSendPacketQueue(Z_Param__pcData,Z_Param__bAllUser,EEOSPacketReliability(Z_Param__enReliability));
		P_NATIVE_END;
	}
	void UEOSNatP2PQueueTransfer::StaticRegisterNativesUEOSNatP2PQueueTransfer()
	{
		UClass* Class = UEOSNatP2PQueueTransfer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToSendPacketQueue", &UEOSNatP2PQueueTransfer::execAddToSendPacketQueue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics
	{
		struct EOSNatP2PQueueTransfer_eventAddToSendPacketQueue_Parms
		{
			UEOSNatP2PPacketBase* _pcData;
			bool _bAllUser;
			EEOSPacketReliability _enReliability;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcData;
		static void NewProp__bAllUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAllUser;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enReliability_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enReliability;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp__pcData = { "_pcData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PQueueTransfer_eventAddToSendPacketQueue_Parms, _pcData), Z_Construct_UClass_UEOSNatP2PPacketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp__bAllUser_SetBit(void* Obj)
	{
		((EOSNatP2PQueueTransfer_eventAddToSendPacketQueue_Parms*)Obj)->_bAllUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp__bAllUser = { "_bAllUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PQueueTransfer_eventAddToSendPacketQueue_Parms), &Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp__bAllUser_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp__enReliability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp__enReliability = { "_enReliability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PQueueTransfer_eventAddToSendPacketQueue_Parms, _enReliability), Z_Construct_UEnum_yEOSSDK_EEOSPacketReliability, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PQueueTransfer_eventAddToSendPacketQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PQueueTransfer_eventAddToSendPacketQueue_Parms), &Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp__pcData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp__bAllUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp__enReliability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp__enReliability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PQueueTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PQueueTransfer, nullptr, "AddToSendPacketQueue", nullptr, nullptr, sizeof(EOSNatP2PQueueTransfer_eventAddToSendPacketQueue_Parms), Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSNatP2PQueueTransfer_NoRegister()
	{
		return UEOSNatP2PQueueTransfer::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcPacketQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcPacketQueue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bSendPacketFromQueueOnUpdate_MetaData[];
#endif
		static void NewProp_m_bSendPacketFromQueueOnUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bSendPacketFromQueueOnUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sSendPacketNumMaxPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sSendPacketNumMaxPerTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sSendPacketSizeMaxPerTick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sSendPacketSizeMaxPerTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSNatP2PCachedTransfer,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSNatP2PQueueTransfer_AddToSendPacketQueue, "AddToSendPacketQueue" }, // 2717345329
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSNatP2PQueueTransfer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PQueueTransfer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_pcPacketQueue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PQueueTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_pcPacketQueue = { "m_pcPacketQueue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PQueueTransfer, m_pcPacketQueue), Z_Construct_UClass_UEOSP2PPacketQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_pcPacketQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_pcPacketQueue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_bSendPacketFromQueueOnUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PQueueTransfer.h" },
	};
#endif
	void Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_bSendPacketFromQueueOnUpdate_SetBit(void* Obj)
	{
		((UEOSNatP2PQueueTransfer*)Obj)->m_bSendPacketFromQueueOnUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_bSendPacketFromQueueOnUpdate = { "m_bSendPacketFromQueueOnUpdate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEOSNatP2PQueueTransfer), &Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_bSendPacketFromQueueOnUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_bSendPacketFromQueueOnUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_bSendPacketFromQueueOnUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_sSendPacketNumMaxPerTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PQueueTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_sSendPacketNumMaxPerTick = { "m_sSendPacketNumMaxPerTick", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PQueueTransfer, m_sSendPacketNumMaxPerTick), METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_sSendPacketNumMaxPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_sSendPacketNumMaxPerTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_sSendPacketSizeMaxPerTick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PQueueTransfer" },
		{ "ModuleRelativePath", "Public/EOSNatP2PQueueTransfer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_sSendPacketSizeMaxPerTick = { "m_sSendPacketSizeMaxPerTick", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PQueueTransfer, m_sSendPacketSizeMaxPerTick), METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_sSendPacketSizeMaxPerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_sSendPacketSizeMaxPerTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_pcPacketQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_bSendPacketFromQueueOnUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_sSendPacketNumMaxPerTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::NewProp_m_sSendPacketSizeMaxPerTick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNatP2PQueueTransfer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::ClassParams = {
		&UEOSNatP2PQueueTransfer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNatP2PQueueTransfer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNatP2PQueueTransfer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNatP2PQueueTransfer, 4255411770);
	template<> YEOSSDK_API UClass* StaticClass<UEOSNatP2PQueueTransfer>()
	{
		return UEOSNatP2PQueueTransfer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNatP2PQueueTransfer(Z_Construct_UClass_UEOSNatP2PQueueTransfer, &UEOSNatP2PQueueTransfer::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSNatP2PQueueTransfer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNatP2PQueueTransfer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
