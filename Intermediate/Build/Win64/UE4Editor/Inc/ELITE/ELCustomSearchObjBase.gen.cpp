// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCustomSearchObjBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCustomSearchObjBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELCustomSearchObjBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELCustomSearchObjBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	DEFINE_FUNCTION(UELCustomSearchObjBase::execInitializeItemMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeItemMenu_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCustomSearchObjBase::execInitializeSearchMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSearchMenu_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UELCustomSearchObjBase_InitializeItemMenu = FName(TEXT("InitializeItemMenu"));
	void UELCustomSearchObjBase::InitializeItemMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCustomSearchObjBase_InitializeItemMenu),NULL);
	}
	static FName NAME_UELCustomSearchObjBase_InitializeSearchMenu = FName(TEXT("InitializeSearchMenu"));
	void UELCustomSearchObjBase::InitializeSearchMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELCustomSearchObjBase_InitializeSearchMenu),NULL);
	}
	void UELCustomSearchObjBase::StaticRegisterNativesUELCustomSearchObjBase()
	{
		UClass* Class = UELCustomSearchObjBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeItemMenu", &UELCustomSearchObjBase::execInitializeItemMenu },
			{ "InitializeSearchMenu", &UELCustomSearchObjBase::execInitializeSearchMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCustomSearchObjBase_InitializeItemMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjBase_InitializeItemMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCustomSearchObjBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCustomSearchObjBase_InitializeItemMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCustomSearchObjBase, nullptr, "InitializeItemMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjBase_InitializeItemMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjBase_InitializeItemMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCustomSearchObjBase_InitializeItemMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCustomSearchObjBase_InitializeItemMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCustomSearchObjBase_InitializeSearchMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjBase_InitializeSearchMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCustomSearchObjBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCustomSearchObjBase_InitializeSearchMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCustomSearchObjBase, nullptr, "InitializeSearchMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjBase_InitializeSearchMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjBase_InitializeSearchMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCustomSearchObjBase_InitializeSearchMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCustomSearchObjBase_InitializeSearchMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCustomSearchObjBase_NoRegister()
	{
		return UELCustomSearchObjBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCustomSearchObjBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCustomSearchObjBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCustomSearchObjBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCustomSearchObjBase_InitializeItemMenu, "InitializeItemMenu" }, // 2444317920
		{ &Z_Construct_UFunction_UELCustomSearchObjBase_InitializeSearchMenu, "InitializeSearchMenu" }, // 2157938856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCustomSearchObjBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCustomSearchObjBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCustomSearchObjBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCustomSearchObjBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCustomSearchObjBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCustomSearchObjBase_Statics::ClassParams = {
		&UELCustomSearchObjBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCustomSearchObjBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchObjBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCustomSearchObjBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCustomSearchObjBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCustomSearchObjBase, 514596543);
	template<> ELITE_API UClass* StaticClass<UELCustomSearchObjBase>()
	{
		return UELCustomSearchObjBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCustomSearchObjBase(Z_Construct_UClass_UELCustomSearchObjBase, &UELCustomSearchObjBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELCustomSearchObjBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCustomSearchObjBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
