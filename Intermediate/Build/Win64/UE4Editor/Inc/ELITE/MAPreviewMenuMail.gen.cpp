// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/MAPreviewMenuMail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMAPreviewMenuMail() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_AMAPreviewMenuMail_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_AMAPreviewMenuMail();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FMAPreviewMenuMailSaveParam();
	ELITE_API UFunction* Z_Construct_UDelegateFunction_ELITE_MAPreviewMenuMailSaveDelegate__DelegateSignature();
	ELITE_API UFunction* Z_Construct_UDelegateFunction_ELITE_MAPreviewMenuMailCloseDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(AMAPreviewMenuMail::execDrawMailSettingsWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawMailSettingsWindow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMAPreviewMenuMail::execLoadSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSettings();
		P_NATIVE_END;
	}
	void AMAPreviewMenuMail::StaticRegisterNativesAMAPreviewMenuMail()
	{
		UClass* Class = AMAPreviewMenuMail::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawMailSettingsWindow", &AMAPreviewMenuMail::execDrawMailSettingsWindow },
			{ "LoadSettings", &AMAPreviewMenuMail::execLoadSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMAPreviewMenuMail_DrawMailSettingsWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMAPreviewMenuMail_DrawMailSettingsWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MAPreviewMenuMail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMAPreviewMenuMail_DrawMailSettingsWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMAPreviewMenuMail, nullptr, "DrawMailSettingsWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMAPreviewMenuMail_DrawMailSettingsWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMAPreviewMenuMail_DrawMailSettingsWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMAPreviewMenuMail_DrawMailSettingsWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMAPreviewMenuMail_DrawMailSettingsWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMAPreviewMenuMail_LoadSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMAPreviewMenuMail_LoadSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MAPreviewMenuMail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMAPreviewMenuMail_LoadSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMAPreviewMenuMail, nullptr, "LoadSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMAPreviewMenuMail_LoadSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMAPreviewMenuMail_LoadSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMAPreviewMenuMail_LoadSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMAPreviewMenuMail_LoadSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMAPreviewMenuMail_NoRegister()
	{
		return AMAPreviewMenuMail::StaticClass();
	}
	struct Z_Construct_UClass_AMAPreviewMenuMail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowMailSettingsWindow_MetaData[];
#endif
		static void NewProp_ShowMailSettingsWindow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowMailSettingsWindow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MailParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MailParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SaveDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetShowMailDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SetShowMailDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMAPreviewMenuMail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMAPreviewMenuMail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMAPreviewMenuMail_DrawMailSettingsWindow, "DrawMailSettingsWindow" }, // 958304970
		{ &Z_Construct_UFunction_AMAPreviewMenuMail_LoadSettings, "LoadSettings" }, // 1606169430
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMAPreviewMenuMail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MAPreviewMenuMail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MAPreviewMenuMail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_ShowMailSettingsWindow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MAPreviewMenuMail" },
		{ "ModuleRelativePath", "Public/MAPreviewMenuMail.h" },
	};
#endif
	void Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_ShowMailSettingsWindow_SetBit(void* Obj)
	{
		((AMAPreviewMenuMail*)Obj)->ShowMailSettingsWindow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_ShowMailSettingsWindow = { "ShowMailSettingsWindow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMAPreviewMenuMail), &Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_ShowMailSettingsWindow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_ShowMailSettingsWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_ShowMailSettingsWindow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_MailParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MAPreviewMenuMail" },
		{ "ModuleRelativePath", "Public/MAPreviewMenuMail.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_MailParam = { "MailParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMAPreviewMenuMail, MailParam), Z_Construct_UScriptStruct_FMAPreviewMenuMailSaveParam, METADATA_PARAMS(Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_MailParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_MailParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_SaveDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MAPreviewMenuMail" },
		{ "ModuleRelativePath", "Public/MAPreviewMenuMail.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_SaveDelegate = { "SaveDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMAPreviewMenuMail, SaveDelegate), Z_Construct_UDelegateFunction_ELITE_MAPreviewMenuMailSaveDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_SaveDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_SaveDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_SetShowMailDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MAPreviewMenuMail" },
		{ "ModuleRelativePath", "Public/MAPreviewMenuMail.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_SetShowMailDelegate = { "SetShowMailDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMAPreviewMenuMail, SetShowMailDelegate), Z_Construct_UDelegateFunction_ELITE_MAPreviewMenuMailCloseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_SetShowMailDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_SetShowMailDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMAPreviewMenuMail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_ShowMailSettingsWindow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_MailParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_SaveDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMAPreviewMenuMail_Statics::NewProp_SetShowMailDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMAPreviewMenuMail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMAPreviewMenuMail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMAPreviewMenuMail_Statics::ClassParams = {
		&AMAPreviewMenuMail::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMAPreviewMenuMail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMAPreviewMenuMail_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMAPreviewMenuMail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMAPreviewMenuMail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMAPreviewMenuMail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMAPreviewMenuMail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMAPreviewMenuMail, 3478486566);
	template<> ELITE_API UClass* StaticClass<AMAPreviewMenuMail>()
	{
		return AMAPreviewMenuMail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMAPreviewMenuMail(Z_Construct_UClass_AMAPreviewMenuMail, &AMAPreviewMenuMail::StaticClass, TEXT("/Script/ELITE"), TEXT("AMAPreviewMenuMail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMAPreviewMenuMail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
