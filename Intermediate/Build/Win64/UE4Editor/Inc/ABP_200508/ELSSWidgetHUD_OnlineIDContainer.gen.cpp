// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_OnlineIDContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_OnlineIDContainer() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_OnlineID_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineIDContainer::execApplyOnlineID)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_InOnlineID);
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_GET_UBOOL(Z_Param_InHasCarrot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyOnlineID(Z_Param_InActor,Z_Param_InOnlineID,Z_Param_inIsVisible,Z_Param_InHasCarrot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineIDContainer::execSetVisibleContainer)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleContainer(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_OnlineIDContainer::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	void UELSSWidgetHUD_OnlineIDContainer::StaticRegisterNativesUELSSWidgetHUD_OnlineIDContainer()
	{
		UClass* Class = UELSSWidgetHUD_OnlineIDContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyOnlineID", &UELSSWidgetHUD_OnlineIDContainer::execApplyOnlineID },
			{ "SetVisibleContainer", &UELSSWidgetHUD_OnlineIDContainer::execSetVisibleContainer },
			{ "Update", &UELSSWidgetHUD_OnlineIDContainer::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics
	{
		struct ELSSWidgetHUD_OnlineIDContainer_eventApplyOnlineID_Parms
		{
			AActor* InActor;
			FString InOnlineID;
			bool inIsVisible;
			bool InHasCarrot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOnlineID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InOnlineID;
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static void NewProp_InHasCarrot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InHasCarrot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineIDContainer_eventApplyOnlineID_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InOnlineID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InOnlineID = { "InOnlineID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineIDContainer_eventApplyOnlineID_Parms, InOnlineID), METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InOnlineID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InOnlineID_MetaData)) };
	void Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_OnlineIDContainer_eventApplyOnlineID_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_OnlineIDContainer_eventApplyOnlineID_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InHasCarrot_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_OnlineIDContainer_eventApplyOnlineID_Parms*)Obj)->InHasCarrot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InHasCarrot = { "InHasCarrot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_OnlineIDContainer_eventApplyOnlineID_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InHasCarrot_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InOnlineID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_inIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::NewProp_InHasCarrot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineIDContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer, nullptr, "ApplyOnlineID", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineIDContainer_eventApplyOnlineID_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics
	{
		struct ELSSWidgetHUD_OnlineIDContainer_eventSetVisibleContainer_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_OnlineIDContainer_eventSetVisibleContainer_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_OnlineIDContainer_eventSetVisibleContainer_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineIDContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer, nullptr, "SetVisibleContainer", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineIDContainer_eventSetVisibleContainer_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics
	{
		struct ELSSWidgetHUD_OnlineIDContainer_eventUpdate_Parms
		{
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_OnlineIDContainer_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineIDContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_OnlineIDContainer_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_NoRegister()
	{
		return UELSSWidgetHUD_OnlineIDContainer::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineIDArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineIDArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineIDArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnlineIDArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_ApplyOnlineID, "ApplyOnlineID" }, // 2675504515
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_SetVisibleContainer, "SetVisibleContainer" }, // 874865673
		{ &Z_Construct_UFunction_UELSSWidgetHUD_OnlineIDContainer_Update, "Update" }, // 2970772436
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_OnlineIDContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineIDContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::NewProp_OnlineIDArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineIDContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineIDContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::NewProp_OnlineIDArray_Inner = { "OnlineIDArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSWidgetHUD_OnlineID_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::NewProp_OnlineIDArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::NewProp_OnlineIDArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::NewProp_OnlineIDArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_OnlineIDContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_OnlineIDContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::NewProp_OnlineIDArray = { "OnlineIDArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_OnlineIDContainer, OnlineIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::NewProp_OnlineIDArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::NewProp_OnlineIDArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::NewProp_OnlineIDArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::NewProp_OnlineIDArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_OnlineIDContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::ClassParams = {
		&UELSSWidgetHUD_OnlineIDContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_OnlineIDContainer, 2858013195);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_OnlineIDContainer>()
	{
		return UELSSWidgetHUD_OnlineIDContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_OnlineIDContainer(Z_Construct_UClass_UELSSWidgetHUD_OnlineIDContainer, &UELSSWidgetHUD_OnlineIDContainer::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_OnlineIDContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_OnlineIDContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
