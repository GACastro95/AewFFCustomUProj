// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/Atom3dTransceiverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtom3dTransceiverComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dTransceiverComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dTransceiverComponent();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtom3dSourceBaseComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UAtom3dTransceiverComponent::StaticRegisterNativesUAtom3dTransceiverComponent()
	{
	}
	UClass* Z_Construct_UClass_UAtom3dTransceiverComponent_NoRegister()
	{
		return UAtom3dTransceiverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtom3dTransceiverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPoint;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultGlobalAisacs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGlobalAisacs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultGlobalAisacs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData[];
#endif
		static void NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInputCrossfadeFieldDebugSpheresVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDirectAudioRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultDirectAudioRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCrossfadeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultCrossfadeDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAtom3dSourceBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Atom3dTransceiverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dTransceiverComponent" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint = { "InputPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dTransceiverComponent, InputPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_Inner = { "DefaultGlobalAisacs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dTransceiverComponent" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs = { "DefaultGlobalAisacs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dTransceiverComponent, DefaultGlobalAisacs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dTransceiverComponent" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_SetBit(void* Obj)
	{
		((UAtom3dTransceiverComponent*)Obj)->bIsInputCrossfadeFieldDebugSpheresVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible = { "bIsInputCrossfadeFieldDebugSpheresVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtom3dTransceiverComponent), &Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dTransceiverComponent" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius = { "DefaultDirectAudioRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dTransceiverComponent, DefaultDirectAudioRadius), METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Atom3dTransceiverComponent" },
		{ "ModuleRelativePath", "Public/Atom3dTransceiverComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance = { "DefaultCrossfadeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtom3dTransceiverComponent, DefaultCrossfadeDistance), METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_InputPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultGlobalAisacs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_bIsInputCrossfadeFieldDebugSpheresVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultDirectAudioRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::NewProp_DefaultCrossfadeDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtom3dTransceiverComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::ClassParams = {
		&UAtom3dTransceiverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtom3dTransceiverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtom3dTransceiverComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtom3dTransceiverComponent, 534114615);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtom3dTransceiverComponent>()
	{
		return UAtom3dTransceiverComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtom3dTransceiverComponent(Z_Construct_UClass_UAtom3dTransceiverComponent, &UAtom3dTransceiverComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtom3dTransceiverComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtom3dTransceiverComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
