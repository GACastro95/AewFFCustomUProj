// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ModelApprovalPreviewMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelApprovalPreviewMenu() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_AModelApprovalPreviewMenu_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_AModelApprovalPreviewMenu();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UFunction* Z_Construct_UDelegateFunction_ELITE_ChangeWrestler__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AModelApprovalPreviewMenu::execGetSelectWrestlerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectWrestlerID();
		P_NATIVE_END;
	}
	void AModelApprovalPreviewMenu::StaticRegisterNativesAModelApprovalPreviewMenu()
	{
		UClass* Class = AModelApprovalPreviewMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectWrestlerID", &AModelApprovalPreviewMenu::execGetSelectWrestlerID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics
	{
		struct ModelApprovalPreviewMenu_eventGetSelectWrestlerID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewMenu_eventGetSelectWrestlerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewMenu, nullptr, "GetSelectWrestlerID", nullptr, nullptr, sizeof(ModelApprovalPreviewMenu_eventGetSelectWrestlerID_Parms), Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModelApprovalPreviewMenu_NoRegister()
	{
		return AModelApprovalPreviewMenu::StaticClass();
	}
	struct Z_Construct_UClass_AModelApprovalPreviewMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventChangeWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventChangeWrestler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModelApprovalPreviewMenu_GetSelectWrestlerID, "GetSelectWrestlerID" }, // 764878297
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModelApprovalPreviewMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::NewProp_EventChangeWrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModelApprovalPreviewMenu" },
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::NewProp_EventChangeWrestler = { "EventChangeWrestler", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModelApprovalPreviewMenu, EventChangeWrestler), Z_Construct_UDelegateFunction_ELITE_ChangeWrestler__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::NewProp_EventChangeWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::NewProp_EventChangeWrestler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::NewProp_EventChangeWrestler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModelApprovalPreviewMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::ClassParams = {
		&AModelApprovalPreviewMenu::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModelApprovalPreviewMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModelApprovalPreviewMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModelApprovalPreviewMenu, 2888064069);
	template<> ELITE_API UClass* StaticClass<AModelApprovalPreviewMenu>()
	{
		return AModelApprovalPreviewMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModelApprovalPreviewMenu(Z_Construct_UClass_AModelApprovalPreviewMenu, &AModelApprovalPreviewMenu::StaticClass, TEXT("/Script/ELITE"), TEXT("AModelApprovalPreviewMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModelApprovalPreviewMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
