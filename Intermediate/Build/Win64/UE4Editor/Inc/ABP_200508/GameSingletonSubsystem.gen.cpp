// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameSingletonSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameSingletonSubsystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGameSingletonSubsystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGameSingletonSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameSingletonSubsystem::execGetInstance)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetInstance(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameSingletonSubsystem::execReleaseInstance)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseInstance(Z_Param_Class);
		P_NATIVE_END;
	}
	void UGameSingletonSubsystem::StaticRegisterNativesUGameSingletonSubsystem()
	{
		UClass* Class = UGameSingletonSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstance", &UGameSingletonSubsystem::execGetInstance },
			{ "ReleaseInstance", &UGameSingletonSubsystem::execReleaseInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics
	{
		struct GameSingletonSubsystem_eventGetInstance_Parms
		{
			UClass* Class;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingletonSubsystem_eventGetInstance_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingletonSubsystem_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSingletonSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSingletonSubsystem, nullptr, "GetInstance", nullptr, nullptr, sizeof(GameSingletonSubsystem_eventGetInstance_Parms), Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics
	{
		struct GameSingletonSubsystem_eventReleaseInstance_Parms
		{
			UClass* Class;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameSingletonSubsystem_eventReleaseInstance_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameSingletonSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameSingletonSubsystem, nullptr, "ReleaseInstance", nullptr, nullptr, sizeof(GameSingletonSubsystem_eventReleaseInstance_Parms), Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameSingletonSubsystem_NoRegister()
	{
		return UGameSingletonSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGameSingletonSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceMap_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InstanceMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_InstanceMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameSingletonSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameSingletonSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameSingletonSubsystem_GetInstance, "GetInstance" }, // 3441671372
		{ &Z_Construct_UFunction_UGameSingletonSubsystem_ReleaseInstance, "ReleaseInstance" }, // 4043999872
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSingletonSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameSingletonSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameSingletonSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameSingletonSubsystem_Statics::NewProp_InstanceMap_ValueProp = { "InstanceMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameSingletonSubsystem_Statics::NewProp_InstanceMap_Key_KeyProp = { "InstanceMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameSingletonSubsystem_Statics::NewProp_InstanceMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameSingletonSubsystem" },
		{ "ModuleRelativePath", "Public/GameSingletonSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGameSingletonSubsystem_Statics::NewProp_InstanceMap = { "InstanceMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameSingletonSubsystem, InstanceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameSingletonSubsystem_Statics::NewProp_InstanceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSingletonSubsystem_Statics::NewProp_InstanceMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameSingletonSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSingletonSubsystem_Statics::NewProp_InstanceMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSingletonSubsystem_Statics::NewProp_InstanceMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameSingletonSubsystem_Statics::NewProp_InstanceMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameSingletonSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameSingletonSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameSingletonSubsystem_Statics::ClassParams = {
		&UGameSingletonSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameSingletonSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameSingletonSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameSingletonSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameSingletonSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameSingletonSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameSingletonSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameSingletonSubsystem, 1029218298);
	template<> ABP_200508_API UClass* StaticClass<UGameSingletonSubsystem>()
	{
		return UGameSingletonSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameSingletonSubsystem(Z_Construct_UClass_UGameSingletonSubsystem, &UGameSingletonSubsystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGameSingletonSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameSingletonSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
