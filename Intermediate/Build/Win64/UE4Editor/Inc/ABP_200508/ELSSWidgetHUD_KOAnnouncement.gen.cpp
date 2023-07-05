// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_KOAnnouncement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_KOAnnouncement() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce = FName(TEXT("IsVisibleKOAnnounce"));
	bool UELSSWidgetHUD_KOAnnouncement::IsVisibleKOAnnounce()
	{
		ELSSWidgetHUD_KOAnnouncement_eventIsVisibleKOAnnounce_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetHUD_KOAnnouncement_PlayKOAnnounceAnimation = FName(TEXT("PlayKOAnnounceAnimation"));
	void UELSSWidgetHUD_KOAnnouncement::PlayKOAnnounceAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetHUD_KOAnnouncement_PlayKOAnnounceAnimation),NULL);
	}
	void UELSSWidgetHUD_KOAnnouncement::StaticRegisterNativesUELSSWidgetHUD_KOAnnouncement()
	{
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_KOAnnouncement_eventIsVisibleKOAnnounce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_KOAnnouncement_eventIsVisibleKOAnnounce_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_KOAnnouncement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement, nullptr, "IsVisibleKOAnnounce", nullptr, nullptr, sizeof(ELSSWidgetHUD_KOAnnouncement_eventIsVisibleKOAnnounce_Parms), Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_PlayKOAnnounceAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_PlayKOAnnounceAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_KOAnnouncement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_PlayKOAnnounceAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement, nullptr, "PlayKOAnnounceAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_PlayKOAnnounceAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_PlayKOAnnounceAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_PlayKOAnnounceAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_PlayKOAnnounceAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_NoRegister()
	{
		return UELSSWidgetHUD_KOAnnouncement::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_IsVisibleKOAnnounce, "IsVisibleKOAnnounce" }, // 2625255832
		{ &Z_Construct_UFunction_UELSSWidgetHUD_KOAnnouncement_PlayKOAnnounceAnimation, "PlayKOAnnounceAnimation" }, // 1621435960
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_KOAnnouncement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_KOAnnouncement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_KOAnnouncement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_Statics::ClassParams = {
		&UELSSWidgetHUD_KOAnnouncement::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_KOAnnouncement, 632984302);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_KOAnnouncement>()
	{
		return UELSSWidgetHUD_KOAnnouncement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_KOAnnouncement(Z_Construct_UClass_UELSSWidgetHUD_KOAnnouncement, &UELSSWidgetHUD_KOAnnouncement::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_KOAnnouncement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_KOAnnouncement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
