// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/EasyGameInstanceSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEasyGameInstanceSubsystem() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UEasyGameInstanceSubsystem_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UEasyGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ELITE_CORE_API UClass* Z_Construct_UClass_UEasyInstancedHelper_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
// End Cross Module References
	DEFINE_FUNCTION(UEasyGameInstanceSubsystem::execGetHelperObject)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEasyInstancedHelper**)Z_Param__Result=P_THIS->GetHelperObject(Z_Param_Class);
		P_NATIVE_END;
	}
	void UEasyGameInstanceSubsystem::StaticRegisterNativesUEasyGameInstanceSubsystem()
	{
		UClass* Class = UEasyGameInstanceSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHelperObject", &UEasyGameInstanceSubsystem::execGetHelperObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics
	{
		struct EasyGameInstanceSubsystem_eventGetHelperObject_Parms
		{
			const TSubclassOf<UEasyInstancedHelper>  Class;
			UEasyInstancedHelper* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::NewProp_Class_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyGameInstanceSubsystem_eventGetHelperObject_Parms, Class), Z_Construct_UClass_UEasyInstancedHelper_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EasyGameInstanceSubsystem_eventGetHelperObject_Parms, ReturnValue), Z_Construct_UClass_UEasyInstancedHelper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EasyGameInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEasyGameInstanceSubsystem, nullptr, "GetHelperObject", nullptr, nullptr, sizeof(EasyGameInstanceSubsystem_eventGetHelperObject_Parms), Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEasyGameInstanceSubsystem_NoRegister()
	{
		return UEasyGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Helper_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Helper_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Helper_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Helper;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartupList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartupList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartupList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEasyGameInstanceSubsystem_GetHelperObject, "GetHelperObject" }, // 696698320
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EasyGameInstanceSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EasyGameInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_Helper_ValueProp = { "Helper", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UEasyInstancedHelper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_Helper_Key_KeyProp = { "Helper_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_Helper_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EasyGameInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/EasyGameInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_Helper = { "Helper", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEasyGameInstanceSubsystem, Helper), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_Helper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_Helper_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_StartupList_Inner = { "StartupList", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_StartupList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EasyGameInstanceSubsystem" },
		{ "ModuleRelativePath", "Public/EasyGameInstanceSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_StartupList = { "StartupList", nullptr, (EPropertyFlags)0x0040000000044005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEasyGameInstanceSubsystem, StartupList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_StartupList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_StartupList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_Helper_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_Helper_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_Helper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_StartupList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::NewProp_StartupList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEasyGameInstanceSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::ClassParams = {
		&UEasyGameInstanceSubsystem::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEasyGameInstanceSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEasyGameInstanceSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEasyGameInstanceSubsystem, 1613430147);
	template<> ELITE_CORE_API UClass* StaticClass<UEasyGameInstanceSubsystem>()
	{
		return UEasyGameInstanceSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEasyGameInstanceSubsystem(Z_Construct_UClass_UEasyGameInstanceSubsystem, &UEasyGameInstanceSubsystem::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UEasyGameInstanceSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEasyGameInstanceSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
