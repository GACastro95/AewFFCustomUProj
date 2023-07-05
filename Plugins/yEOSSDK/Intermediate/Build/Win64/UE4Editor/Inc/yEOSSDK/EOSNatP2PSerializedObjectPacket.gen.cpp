// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSNatP2PSerializedObjectPacket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSNatP2PSerializedObjectPacket() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSNatP2PSerializedObjectPacket::execCreateObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->CreateObject(Z_Param_Outer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PSerializedObjectPacket::execGetId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PSerializedObjectPacket::execGetType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSNatP2PSerializedObjectPacket::execSetObject)
	{
		P_GET_OBJECT(UObject,Z_Param__pcObject);
		P_GET_PROPERTY(FIntProperty,Z_Param__sType);
		P_GET_PROPERTY(FIntProperty,Z_Param__sId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetObject(Z_Param__pcObject,Z_Param__sType,Z_Param__sId);
		P_NATIVE_END;
	}
	void UEOSNatP2PSerializedObjectPacket::StaticRegisterNativesUEOSNatP2PSerializedObjectPacket()
	{
		UClass* Class = UEOSNatP2PSerializedObjectPacket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateObject", &UEOSNatP2PSerializedObjectPacket::execCreateObject },
			{ "GetId", &UEOSNatP2PSerializedObjectPacket::execGetId },
			{ "GetType", &UEOSNatP2PSerializedObjectPacket::execGetType },
			{ "SetObject", &UEOSNatP2PSerializedObjectPacket::execSetObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics
	{
		struct EOSNatP2PSerializedObjectPacket_eventCreateObject_Parms
		{
			UObject* Outer;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PSerializedObjectPacket_eventCreateObject_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PSerializedObjectPacket_eventCreateObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PSerializedObjectPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket, nullptr, "CreateObject", nullptr, nullptr, sizeof(EOSNatP2PSerializedObjectPacket_eventCreateObject_Parms), Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics
	{
		struct EOSNatP2PSerializedObjectPacket_eventGetId_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PSerializedObjectPacket_eventGetId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PSerializedObjectPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket, nullptr, "GetId", nullptr, nullptr, sizeof(EOSNatP2PSerializedObjectPacket_eventGetId_Parms), Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics
	{
		struct EOSNatP2PSerializedObjectPacket_eventGetType_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PSerializedObjectPacket_eventGetType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PSerializedObjectPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket, nullptr, "GetType", nullptr, nullptr, sizeof(EOSNatP2PSerializedObjectPacket_eventGetType_Parms), Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics
	{
		struct EOSNatP2PSerializedObjectPacket_eventSetObject_Parms
		{
			UObject* _pcObject;
			int32 _sType;
			int32 _sId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::NewProp__pcObject = { "_pcObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PSerializedObjectPacket_eventSetObject_Parms, _pcObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::NewProp__sType = { "_sType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PSerializedObjectPacket_eventSetObject_Parms, _sType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::NewProp__sId = { "_sId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSNatP2PSerializedObjectPacket_eventSetObject_Parms, _sId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSNatP2PSerializedObjectPacket_eventSetObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSNatP2PSerializedObjectPacket_eventSetObject_Parms), &Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::NewProp__pcObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::NewProp__sType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::NewProp__sId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSNatP2PSerializedObjectPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket, nullptr, "SetObject", nullptr, nullptr, sizeof(EOSNatP2PSerializedObjectPacket_eventSetObject_Parms), Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_NoRegister()
	{
		return UEOSNatP2PSerializedObjectPacket::StaticClass();
	}
	struct Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_cSerializedData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cSerializedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cSerializedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSNatP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_CreateObject, "CreateObject" }, // 2884583647
		{ &Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetId, "GetId" }, // 2259514794
		{ &Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_GetType, "GetType" }, // 1232218478
		{ &Z_Construct_UFunction_UEOSNatP2PSerializedObjectPacket_SetObject, "SetObject" }, // 1896718238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSNatP2PSerializedObjectPacket.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSerializedObjectPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::NewProp_m_cSerializedData_Inner = { "m_cSerializedData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::NewProp_m_cSerializedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSNatP2PSerializedObjectPacket" },
		{ "ModuleRelativePath", "Public/EOSNatP2PSerializedObjectPacket.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::NewProp_m_cSerializedData = { "m_cSerializedData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSNatP2PSerializedObjectPacket, m_cSerializedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::NewProp_m_cSerializedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::NewProp_m_cSerializedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::NewProp_m_cSerializedData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::NewProp_m_cSerializedData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSNatP2PSerializedObjectPacket>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::ClassParams = {
		&UEOSNatP2PSerializedObjectPacket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSNatP2PSerializedObjectPacket, 3931208217);
	template<> YEOSSDK_API UClass* StaticClass<UEOSNatP2PSerializedObjectPacket>()
	{
		return UEOSNatP2PSerializedObjectPacket::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSNatP2PSerializedObjectPacket(Z_Construct_UClass_UEOSNatP2PSerializedObjectPacket, &UEOSNatP2PSerializedObjectPacket::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSNatP2PSerializedObjectPacket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSNatP2PSerializedObjectPacket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
