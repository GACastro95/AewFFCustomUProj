// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SessionSerializedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionSerializedData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USessionSerializedData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USessionSerializedData();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USessionSerializedData::execCreateObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->CreateObject(Z_Param_Outer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionSerializedData::execGetObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionSerializedData::execGetSerializedDataSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSerializedDataSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionSerializedData::execSetObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetObject(Z_Param_Object,Z_Param_Index);
		P_NATIVE_END;
	}
	void USessionSerializedData::StaticRegisterNativesUSessionSerializedData()
	{
		UClass* Class = USessionSerializedData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateObject", &USessionSerializedData::execCreateObject },
			{ "GetObject", &USessionSerializedData::execGetObject },
			{ "GetSerializedDataSize", &USessionSerializedData::execGetSerializedDataSize },
			{ "SetObject", &USessionSerializedData::execSetObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics
	{
		struct SessionSerializedData_eventCreateObject_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionSerializedData_eventCreateObject_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionSerializedData_eventCreateObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionSerializedData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionSerializedData, nullptr, "CreateObject", nullptr, nullptr, sizeof(SessionSerializedData_eventCreateObject_Parms), Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionSerializedData_CreateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionSerializedData_CreateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionSerializedData_GetObject_Statics
	{
		struct SessionSerializedData_eventGetObject_Parms
		{
			UObject* Object;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionSerializedData_eventGetObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SessionSerializedData_eventGetObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SessionSerializedData_eventGetObject_Parms), &Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionSerializedData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionSerializedData, nullptr, "GetObject", nullptr, nullptr, sizeof(SessionSerializedData_eventGetObject_Parms), Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionSerializedData_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionSerializedData_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics
	{
		struct SessionSerializedData_eventGetSerializedDataSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionSerializedData_eventGetSerializedDataSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionSerializedData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionSerializedData, nullptr, "GetSerializedDataSize", nullptr, nullptr, sizeof(SessionSerializedData_eventGetSerializedDataSize_Parms), Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionSerializedData_SetObject_Statics
	{
		struct SessionSerializedData_eventSetObject_Parms
		{
			UObject* Object;
			int32 Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionSerializedData_eventSetObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionSerializedData_eventSetObject_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SessionSerializedData_eventSetObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SessionSerializedData_eventSetObject_Parms), &Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionSerializedData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionSerializedData, nullptr, "SetObject", nullptr, nullptr, sizeof(SessionSerializedData_eventSetObject_Parms), Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionSerializedData_SetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionSerializedData_SetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USessionSerializedData_NoRegister()
	{
		return USessionSerializedData::StaticClass();
	}
	struct Z_Construct_UClass_USessionSerializedData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SerializedData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USessionSerializedData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USessionSerializedData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USessionSerializedData_CreateObject, "CreateObject" }, // 3898458103
		{ &Z_Construct_UFunction_USessionSerializedData_GetObject, "GetObject" }, // 3082623256
		{ &Z_Construct_UFunction_USessionSerializedData_GetSerializedDataSize, "GetSerializedDataSize" }, // 2989587563
		{ &Z_Construct_UFunction_USessionSerializedData_SetObject, "SetObject" }, // 1275328851
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USessionSerializedData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SessionSerializedData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SessionSerializedData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USessionSerializedData_Statics::NewProp_SerializedData_Inner = { "SerializedData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USessionSerializedData_Statics::NewProp_SerializedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionSerializedData" },
		{ "ModuleRelativePath", "Public/SessionSerializedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USessionSerializedData_Statics::NewProp_SerializedData = { "SerializedData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USessionSerializedData, SerializedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USessionSerializedData_Statics::NewProp_SerializedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USessionSerializedData_Statics::NewProp_SerializedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USessionSerializedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USessionSerializedData_Statics::NewProp_SerializedData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USessionSerializedData_Statics::NewProp_SerializedData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USessionSerializedData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USessionSerializedData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USessionSerializedData_Statics::ClassParams = {
		&USessionSerializedData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USessionSerializedData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USessionSerializedData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USessionSerializedData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USessionSerializedData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USessionSerializedData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USessionSerializedData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USessionSerializedData, 2615671814);
	template<> ABP_200508_API UClass* StaticClass<USessionSerializedData>()
	{
		return USessionSerializedData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USessionSerializedData(Z_Construct_UClass_USessionSerializedData, &USessionSerializedData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USessionSerializedData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USessionSerializedData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
