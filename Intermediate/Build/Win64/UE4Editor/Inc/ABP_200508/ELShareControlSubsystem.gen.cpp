// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELShareControlSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELShareControlSubsystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELShareControlSubsystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELShareControlSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELShareControlSubsystem::execSetEnableRecord)
	{
		P_GET_UBOOL(Z_Param__Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableRecord(Z_Param__Enable);
		P_NATIVE_END;
	}
	void UELShareControlSubsystem::StaticRegisterNativesUELShareControlSubsystem()
	{
		UClass* Class = UELShareControlSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetEnableRecord", &UELShareControlSubsystem::execSetEnableRecord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics
	{
		struct ELShareControlSubsystem_eventSetEnableRecord_Parms
		{
			bool _Enable;
		};
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((ELShareControlSubsystem_eventSetEnableRecord_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShareControlSubsystem_eventSetEnableRecord_Parms), &Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::NewProp__Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShareControlSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShareControlSubsystem, nullptr, "SetEnableRecord", nullptr, nullptr, sizeof(ELShareControlSubsystem_eventSetEnableRecord_Parms), Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELShareControlSubsystem_NoRegister()
	{
		return UELShareControlSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UELShareControlSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELShareControlSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELShareControlSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELShareControlSubsystem_SetEnableRecord, "SetEnableRecord" }, // 1063182646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShareControlSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELShareControlSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELShareControlSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELShareControlSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELShareControlSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELShareControlSubsystem_Statics::ClassParams = {
		&UELShareControlSubsystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELShareControlSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELShareControlSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELShareControlSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELShareControlSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELShareControlSubsystem, 3519197074);
	template<> ABP_200508_API UClass* StaticClass<UELShareControlSubsystem>()
	{
		return UELShareControlSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELShareControlSubsystem(Z_Construct_UClass_UELShareControlSubsystem, &UELShareControlSubsystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELShareControlSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELShareControlSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
