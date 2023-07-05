// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSInstanceBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSInstanceBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInstanceBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInstanceBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInstanceManagerBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSObjectType();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAPIRequestManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSInstanceBase::execGetInstanceID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetInstanceID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSInstanceBase::execGetInstanceManagerForDebug)
	{
		P_GET_OBJECT_REF(UEOSInstanceManagerBase,Z_Param_Out__pcInstanceManagerBase);
		P_GET_PROPERTY(FIntProperty,Z_Param__uInstanceID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSInstanceBase::GetInstanceManagerForDebug(Z_Param_Out__pcInstanceManagerBase,Z_Param__uInstanceID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSInstanceBase::execGetObjectType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSObjectType*)Z_Param__Result=P_THIS->GetObjectType();
		P_NATIVE_END;
	}
	void UEOSInstanceBase::StaticRegisterNativesUEOSInstanceBase()
	{
		UClass* Class = UEOSInstanceBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstanceID", &UEOSInstanceBase::execGetInstanceID },
			{ "GetInstanceManagerForDebug", &UEOSInstanceBase::execGetInstanceManagerForDebug },
			{ "GetObjectType", &UEOSInstanceBase::execGetObjectType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics
	{
		struct EOSInstanceBase_eventGetInstanceID_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSInstanceBase_eventGetInstanceID_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSInstanceBase, nullptr, "GetInstanceID", nullptr, nullptr, sizeof(EOSInstanceBase_eventGetInstanceID_Parms), Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics
	{
		struct EOSInstanceBase_eventGetInstanceManagerForDebug_Parms
		{
			UEOSInstanceManagerBase* _pcInstanceManagerBase;
			int32 _uInstanceID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInstanceManagerBase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__uInstanceID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::NewProp__pcInstanceManagerBase = { "_pcInstanceManagerBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSInstanceBase_eventGetInstanceManagerForDebug_Parms, _pcInstanceManagerBase), Z_Construct_UClass_UEOSInstanceManagerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::NewProp__uInstanceID = { "_uInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSInstanceBase_eventGetInstanceManagerForDebug_Parms, _uInstanceID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSInstanceBase_eventGetInstanceManagerForDebug_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSInstanceBase_eventGetInstanceManagerForDebug_Parms), &Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::NewProp__pcInstanceManagerBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::NewProp__uInstanceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSInstanceBase, nullptr, "GetInstanceManagerForDebug", nullptr, nullptr, sizeof(EOSInstanceBase_eventGetInstanceManagerForDebug_Parms), Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics
	{
		struct EOSInstanceBase_eventGetObjectType_Parms
		{
			EEOSObjectType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSInstanceBase_eventGetObjectType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSObjectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSInstanceBase, nullptr, "GetObjectType", nullptr, nullptr, sizeof(EOSInstanceBase_eventGetObjectType_Parms), Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSInstanceBase_GetObjectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSInstanceBase_GetObjectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSInstanceBase_NoRegister()
	{
		return UEOSInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcRefAPIRequestManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcRefAPIRequestManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSLockebleCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSInstanceBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSInstanceBase_GetInstanceID, "GetInstanceID" }, // 3231637010
		{ &Z_Construct_UFunction_UEOSInstanceBase_GetInstanceManagerForDebug, "GetInstanceManagerForDebug" }, // 588361688
		{ &Z_Construct_UFunction_UEOSInstanceBase_GetObjectType, "GetObjectType" }, // 2272799333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSInstanceBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSInstanceBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSInstanceBase_Statics::NewProp_m_pcRefAPIRequestManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSInstanceBase" },
		{ "ModuleRelativePath", "Public/EOSInstanceBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSInstanceBase_Statics::NewProp_m_pcRefAPIRequestManager = { "m_pcRefAPIRequestManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSInstanceBase, m_pcRefAPIRequestManager), Z_Construct_UClass_UEOSAPIRequestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSInstanceBase_Statics::NewProp_m_pcRefAPIRequestManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSInstanceBase_Statics::NewProp_m_pcRefAPIRequestManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSInstanceBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSInstanceBase_Statics::NewProp_m_pcRefAPIRequestManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSInstanceBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSInstanceBase_Statics::ClassParams = {
		&UEOSInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSInstanceBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSInstanceBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSInstanceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSInstanceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSInstanceBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSInstanceBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSInstanceBase, 2209337062);
	template<> YEOSSDK_API UClass* StaticClass<UEOSInstanceBase>()
	{
		return UEOSInstanceBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSInstanceBase(Z_Construct_UClass_UEOSInstanceBase, &UEOSInstanceBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSInstanceBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSInstanceBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
